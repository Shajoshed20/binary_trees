#include "binary_trees.h"

/**
 * binary_tree_sibling - Function to find the sibling of a
 *                       node in a binary tree.
 * @node: Variable to point to the node to find the sibling.
 *
 * Return: A pointer to sibling node.
 *         Otherwise - node is NULL or there is no sibling - NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
