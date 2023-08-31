#include "binary_trees.h"

/**
 * binary_tree_postorder - A post-order transverse on a binary tree
 *
 * @tree: a pointer to the tree's root node, which must be traversed
 * @func: a pointer to the function each node should call.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
