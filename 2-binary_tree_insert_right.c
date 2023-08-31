#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function to insert inserts node as the right-child.
 * @parent: Variable to point to node parent for right-child insert.
 * @value: Variable for node value.
 *
 * Return: A pointer to new node.
 *         Otherwise - NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check for empty parent node*/
	if (!parent)
		return (NULL);

	/*Assigns value to node and checks for NULL*/
	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/*When right of parent node contains a value*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return (new_node);
}
