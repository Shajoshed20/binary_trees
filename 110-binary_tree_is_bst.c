#include "binary_trees.h"

/**
 * check_bst - Function to check validity of if binary tree
 *					is a valid binary search tree.
 * @tree: Variable to point to the root node.
 * @low: Variable for lowest value.
 * @hig: Variable for highest value.
 *
 * Return: 1 for the tree is a valid binary search tree
 *			Otherwise - 0.
 */
int check_bst(const binary_tree_t *tree, int low, int hig)
{
	if (tree != NULL)
	{
		if (tree->n < low || tree->n > hig)
			return (0);

		return (check_bst(tree->left, low, tree->n - 1) &&
			check_bst(tree->right, tree->n + 1, hig));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Function to check binary tree is a binary search tree.
 * @tree: Variable for pointer to tree root node.
 *
 * Return: 1 for tree is a valid binary search tree.
 *			Otherwise - 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*check for Binary search tree*/
	return (check_bst(tree, INT_MIN, INT_MAX));
}
