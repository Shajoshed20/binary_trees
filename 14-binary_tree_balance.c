#include "binary_trees.h"

/**
 * binary_tree_height- Height measurement of a binary tree
 *
 * @tree: a pointer to the tree's root node, which must be traversed
 *
 * Return: Height of the tree, return 0 if tre is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lf_ht = 0, rh_ht = 0;

		lf_ht = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rh_ht = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lf_ht > rh_ht) ? lf_ht : rh_ht);
	}
	return (0);
}

/**
 * binary_tree_balance - Function to measure the balance factor of binary tree.
 * @tree: Variable to point to the root node of the tree to measure.
 *
 * Return: Balance factor
 *			Otherwise: NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node, right_node, balance;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_node = binary_tree_height(tree->left);
		right_node = binary_tree_height(tree->right);
		balance = left_node - right_node;

	}

	return (balance);
}
