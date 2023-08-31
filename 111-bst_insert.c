#include "binary_trees.h"

/**
 * bst_insert - Function to insert a value in a Binary Search Tree.
 * @tree: Variable for double pointer to root node to insert the value.
 * @value: Variable for value to store in the inserted node.
 *
 * Return: A pointer to the created node
 *			Otherwise - NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *temp_node;
	bst_t *new_node;

	if (!tree)
	{
		return (NULL);
	}
	else
	{
		temp_node = *tree;
		if (temp_node == NULL)
		{
			new_node = binary_tree_node(temp_node, value);
			if (new_node == NULL)
				return (NULL);

			return (*tree = new_node);
		}

		/*Insert into left*/
		if (value < temp_node->n)
		{
			if (temp_node->left != NULL)
				return (bst_insert(&temp_node->left, value));

			new_node = binary_tree_node(temp_node, value);
			if (new_node == NULL)
				return (NULL);
			return (temp_node->left = new_node);
		}

		/*Insert into right*/
		else
		{
			if (temp_node->right != NULL)
				return (bst_insert(&temp_node->right, value));

			new_node = binary_tree_node(temp_node, value);
			if (new_node == NULL)
				return (NULL);
			return (temp_node->right = new_node);
		}
	}
	return (NULL);
}
