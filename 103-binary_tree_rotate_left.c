#include "binary_trees.h"
/**
 * binary_tree_rotate_left - a left rotation on a binary tree
 * @tree: a pointer to the root node
 *
 * Return: pointer to the rotated new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree || !tree->right)
		return (tree);

	binary_tree_t *root = tree->right;
	binary_tree_t *tmp = root->left;

	root->left = tree;
	tree->right = tmp;

	if (tmp)
		tmp->parent = tree;

	root->parent = tree->parent;
	tree->parent = root;

	return (root);
}
