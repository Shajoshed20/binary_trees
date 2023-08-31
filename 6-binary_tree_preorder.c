#include "binary_trees.h"

/**
 * binary_tree_preorder - uses pre-order traversal method advance through a binary tree
 * @tree: a pointer to the tree's root node, which must be traversed
 * @func: a pointer to the function each node should call.
 */

void binary_tree_preorder(cnst binary_tree_t *tree, void (*func)(int))
{
	while (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		tree = tree->right;
	}
}
