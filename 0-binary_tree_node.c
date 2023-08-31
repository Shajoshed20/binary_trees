#include "binary_trees.h"

/**
 * binary_tree_node - Function to creates binary tree node.
 * @parent: Variable for pointer to the node parent.
 * @value: Variable for node value.
 *
 * Return: A pointer to the new_node.
 *         Otherwise - NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	/*checks for null value*/
	if (new_node == NULL)
		return (NULL);

	/*assigns value to new_node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
