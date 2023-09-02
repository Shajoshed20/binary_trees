#include "binary_trees.h"

/**
 * successor - Function to returns the minimum value of BST.
 * @node: A pointer to the root node of the BST to search.
 *
 * Return: The minimum value in tree.
 */
bst_t *successor(bst_t *node)
{
	while (node->left != NULL)
		node = node->left;
	return (node);
}

/**
 * delete_node - Function to delete node from BST.
 * @root: Variable for a pointer to the root node.
 * @node: Variable for a pointer to the node to delete.
 *
 * Return: A pointer to the new root node after deleted.
 */
bst_t *delete_node(bst_t *root, bst_t *node)
{
	bst_t *inherit = NULL;

	/* For left-child only */
	if (!node->right)
	{
		if (node->parent != NULL && node->parent->left == node)
			node->parent->left = node->left;
		else if (node->parent != NULL)
			node->parent->right = node->left;
		if (node->left != NULL)
			node->left->parent = node->parent;
		free(node);
		return (node->parent == NULL ? node->left : root);
	}

	/* For right-child only */
	if (!node->left)
	{
		if (node->parent != NULL && node->parent->left == node)
			node->parent->left = node->right;
		else if (node->parent != NULL)
			node->parent->right = node->right;
		if (node->right != NULL)
			node->right->parent = node->parent;
		free(node);
		return (node->parent == NULL ? node->right : root);
	}

	/* Two children */
	inherit = successor(node->right);
	node->n = inherit->n;

	return (delete_node(root, inherit));
}

/**
 * delete_recurse - Function to delete node from BST recursively.
 * @root: Variable for pointer to root node.
 * @node: Variable for a pointer to the current node.
 * @value: Variable for value to remove.
 *
 * Return: A pointer to the root node after deletion.
 */
bst_t *delete_recurse(bst_t *root, bst_t *node, int value)
{
	if (node != NULL)
	{
		if (node->n == value)
			return (delete_node(root, node));
		if (node->n > value)
			return (delete_recurse(root, node->left, value));

		return (delete_recurse(root, node->right, value));
	}

	return (NULL);
}

/**
 * bst_remove - Function to remove a node from binary search tree.
 * @root: Variable for a pointer to the root node.
 * @value: Variable for value to remove in BST.
 *
 * Return: A pointer to the new root node after deletion.
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp;

	if (root == NULL)
		return (root);

	if(value < root->n)
		root->left = bst_remove(root->left, value);
	else if (value > root->n)
		roor->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			tmp = root->right;
			free(root);
			return(tmp);
		}
		else if (root->right == NULL)
		{
			tmp = root->left;
			free(root);
			return(tmp);
		}

		tmp = successor(root->right);
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp ->n);
	}
	return (root);
}
