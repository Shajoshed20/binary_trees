#include "binary_trees.h"

/**
 * bst_search - Function to search for a value in a BST.
 * @tree: Variable for pointer to the root node of the BST.
 * @value: Variable for value to search for in the BST.
 *
 * Return: A pointer to node containing the value.
 *         Otherwise - NULL.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);

	else
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		else if (tree->n > value)
			return (bst_search(tree->left, value));

		return (bst_search(tree->right, value));
	}
	return (NULL);
}
