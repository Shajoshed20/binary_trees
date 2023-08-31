#include "binary_trees.h"

/**
 * binary_tree_is_full - Function to check if binary tree is full.
 * @tree: Variable to point to the root node.
 *
 * Return: 1 for tree is full.
 *			Otherwise - 0 for tree is NULL or is not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	else
	{
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	}

	return (0);
}
