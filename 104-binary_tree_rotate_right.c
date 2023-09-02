#include "binary_trees.h"
/**
 * binary_tree_rotate_right - a right rotated binary tree
 * @tree: pointer to the rotated root node
 * Return: pointer to rotated new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root;
	binary_tree_t *tmp;

	if (!tree || !tree->left)
		return (tree);

	root = tree->left;
	tmp = root->right;
	root->right = tree;
	tree->left = tmp;

	if (tmp)
		tmp->parent = tree;

	root->parent = tree->parent;
	tree->parent = root;

	return (root);
}
