#include "binary_trees.h"

/**
 * avl_insert - Inserts a value into an AVL tree.
 * @tree: A double pointer to the root node of the AVL tree.
 * @value: The value to insert into the tree.
 *
 * Return: A pointer to the created node or NULL on failure.
 */
avl_t *avl_insert(avl_t **tree, int value)
{
	int balance;

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		if (*tree == NULL)
			return (NULL);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		(*tree)->left = avl_insert(&((*tree)->left), value);
	}
	else if (value > (*tree)->n)
	{
		(*tree)->right = avl_insert(&((*tree)->right), value);
	}
	else
	{
		return (NULL); /* Duplicate values are not allowed */
	}

	/* Update the height of the current node */
	(*tree)->height = 1 + MAX(avl_height((*tree)->left), avl_height((*tree)->right));

	/* Check if the tree is unbalanced */
	balance = avl_balance(*tree);

	/* Left heavy */
	if (balance > 1)
	{
		/* Right rotation */
		if (value < (*tree)->left->n)
			return (avl_right_rotate(tree));
		/* Left-Right rotation */
		else
		{
			(*tree)->left = avl_left_rotate(&((*tree)->left));
			return (avl_right_rotate(tree));
		}
	}

	/* Right heavy */
	if (balance < -1)
	{
		/* Left rotation */
		if (value > (*tree)->right->n)
			return (avl_left_rotate(tree));
		/* Right-Left rotation */
		else
		{
			(*tree)->right = avl_right_rotate(&((*tree)->right));
			return (avl_left_rotate(tree));
		}
	}
	return (*tree);
}
