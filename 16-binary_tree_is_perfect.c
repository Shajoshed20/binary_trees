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
	size_t height = binary_tree_height(tree);
	size_t expected_nodes = (size_t)binary_recursion(2, height + 1);

	if (tree == NULL)
		return (0);

	return ((expected_nodes - 1 == binary_tree_size(tree)));
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));

	return (0);
}

/**
 *binary_recursion - Function to return i raised to the power of j
 *@i: the value
 *@j: the power
 *Return: i to the power of j,
 *			-1 for y is negative
 */

int binary_recursion(int i, int j)
{
	if (j < 0)
		return (-1);
	if (j == 0)
		return (1);
	else
		return (i * binary_recursion(i, j - 1));

}

/**
 * binary_tree_height- Height measurement of a binary tree
 * @tree: a pointer to the tree's root node, which must be traversed
 *
 * Return: Height of the tree, return 0 if tre is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lf_ht = 0, rh_ht = 0;

	if (tree)
	{
		lf_ht = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		rh_ht = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((lf_ht > rh_ht) ? lf_ht : rh_ht);
	}
	return (0);
}
