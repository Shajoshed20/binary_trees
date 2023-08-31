#include "binary_trees.h"

/**
 * array_to_bst - Function to build a Binary Search Tree from an array
 * @array: Variable for pointer to the first element of
 *			the array to be converted
 * @size: Variable for number of elements in array
 *
 * Return: A pointer to the root node of the created BST
 *         Otherwise - NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i;

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);

	return (tree);
}
