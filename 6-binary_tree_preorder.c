#include "binary_trees.h"

/**
 * binary_tree_preorder - uses pre-order traversal method advance through
 * @tree: a pointer to the tree's root node, which must be traversed
 * @func: a pointer to the function each node should call.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
