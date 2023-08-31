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

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
