#include "binary_trees.h"

/**
 * binary_tree_depth - Depth measurement of a node in binary tree
 *
 * @tree: a pointer to the tree's root node, which must be traversed
 *
 * Return: node depth or 0 if tree is null
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_ht = binary_tree_height(tree->left);
	size_t right_ht = binary_tree_height(tree->right);

	return ((left_ht > right_ht) ? left_ht + 1 : right_ht + 1);
}
