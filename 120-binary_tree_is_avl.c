#include "binary_trees.h"
/**
 * max - return max bewtween two numbers
 * @a: first int
 * @b: second int
 *
 * Return: max
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}

/**
 * height - Calculates the height of a binary tre
 * @tree: pointer to binary root tree
 *
 * Return: Height
 */
int height(const binary_tree_t *tree)
{
	int lf_ht;
	int rh_ht;

	if (tree == NULL)
		return (0);

	lf_ht = height(tree->left);
	rh_ht = height(tree->right);

	return (1 + max(lf_ht, rh_ht));
}

/**
 * check_avl - check if binary tree is a balanced AVL
 * @tree: a pointer to the binary tree root
 *
 * Return: 1 if balance, 0 if not
 */
int check_avl(const binary_tree_t *tree)
{
	int lf_ht;
	int rg_ht;

	if (tree == NULL)
		return (1);

	lf_ht = height(tree->left);
	rg_ht = height(tree->right);

	if (abs(lf_ht - rg_ht) <= 1 &&
			check_avl(tree->left) && check_avl(tree->right))
	{
		return (1);
	}

	return (0);
}

/**
 * binary_tree_is_avl - checks if binary tree is avl
 * @tree: pointere to the root node
 *
 * Return: 1 if tree is avl or 0 if not
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int value = 0;

	if (tree == NULL)
		return (value);

	if (check_avl(tree) &&
			binary_tree_is_avl(tree->left) &&
			binary_tree_is_avl(tree->right))
	{
		return (1);
	}

	return (0);
}
