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
	if (tree == NULL)
		return (0);

	size_t left_ht = 0;
	size_t right_ht = 0;

	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);

	return ((left_ht > right_ht) ? (left_ht + 1) : (right_ht + 1));
}
