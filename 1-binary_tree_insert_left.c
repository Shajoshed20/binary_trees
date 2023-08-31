#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function to insert inserts node as the left-child.
 * @parent: Variable to point to node parent for left-child insert.
 * @value: Variable for node value.
 *
 * Return: A pointer to new_node.
 *         Otherwise - NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check for empty parent node*/
	if (!parent)
		return (NULL);

	/*Assigns value to node and checks for NULL*/
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/*When left of parent node contains a value*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;
	return (new_node);
}
