#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to checks if a node is a leaf of
 *							a binary tree.
 * @node: Variable to point to the node to check.
 *
 * Return: the node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
