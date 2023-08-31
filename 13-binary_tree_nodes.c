#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: number of counted nodes
 *			Otherwise: NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_node = 0;

	/*Checks for tree*/
	if (!tree)
	{
		return (0);
	}
	else
	{
		/*Checks if tree has left and right node*/
		num_node += (tree->left || tree->right) ? 1 : 0;

		/*Proceed to store and update num_node*/
		num_node += binary_tree_nodes(tree->left);
		num_node += binary_tree_nodes(tree->right);
	}

	return (num_node);
}
