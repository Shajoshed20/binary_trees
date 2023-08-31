#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function to check if binary tree is perfect.
 * @tree: Variable to point to the root node of the tree to check.
 *
 * Return: 1 for the tree is perfect
 *			Otherwise - 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = binary_tree_height(tree->left);
		size_t right_height = binary_tree_height(tree->right);

		if (left_height == right_height)
		{
			if (left_height == 0)
				return (1);

			return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right):
		}
		return 0;
	}
	return (0);
}

