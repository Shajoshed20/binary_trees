#include "binary_trees.h"

/**
 * binary_tree_is_root - Function to check node is a root of a binary tree.
 * @node: Variable to point to the node to check.
 *
 * Return: the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);

	return (1);
}
