#include "binary_trees.h"

/**
 * binary_tree_leaves - Function to count the leaves in binary tree.
 * @tree: Variable to point to root node to count the leaves.
 *
 * Return: The number of leaves.
 *			Otherwise: NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaf = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		/*Checks if node on tree is leaf*/
		num_leaf += (!tree->left && !tree->right) ? 1 : 0;

		/*Proceed to add value on left and right node*/
		num_leaf += binary_tree_leaves(tree->left);
		num_leaf += binary_tree_leaves(tree->right);
	}
	return (num_leaf);
}
