#include "binary_trees.h"

void print_nodes_at_level(const binary_tree_t *tree, void (*func)(int), int level);
/**
 * binary_tree_levelorder - Traverse a binary tree
 * @tree: tree pointer
 * @func: function calling node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0;
	size_t level = 1;

	if (tree && func)
	{
		height = binary_tree_height(tree);

		while (level <= height + 1)
		{
			print_nodes_at_level(tree, func, level);
			level++;
		}
	}
}
/**
 * print_nodes_at_level - Print nodes at a specific level of the tree.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function to call for each node.
 * @level: The level at which to print nodes.
 */
void print_nodes_at_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree && func)
	{
		if (level == 1)
			func(tree->n);
		else
		{
			print_nodes_at_level(tree->left, func, level - 1);
			print_nodes_at_level(tree->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0;
		size_t right_height = 0;

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);

		return (left_height > right_height ? left_height : right_height);
	}
	else
	{
		return (0);
	}
}
