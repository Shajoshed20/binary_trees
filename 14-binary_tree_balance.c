#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
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
