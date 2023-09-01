#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: Common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);

	/* Create an array to store root path to first node */
	binary_tree_t *path_first[100];
	int path_length_first = 0;

	/* Create an array to store root path to the second node */
	binary_tree_t *path_two[100];
	int path_length_two = 0;

	binary_tree_t *current_first = (binary_tree_t *)frist;
	binary_tree_t *current_second = (binary_tree_t *)second;

	while (current_first)
	{
		path_first[path_length_first] = current_first;
		path_length_first++;
		current_first = current_first->parent;
	}

	while (current_second)
	{
		path_two[path_length_two] = current_second;
		path_length_second++;
		current_second = current_second->parent;
	}

	binary_tree_t *ancestor = NULL;

	while (path_length_first > 0 && path_length_two > 0 &&
			path_first[path_length_first - 1] == path_two[path_length_two - 1])
	{
		ancestor = path_first[path_length_first - 1];
		path_length_first--;
		path_length_second--;
	}

	return (ancestor);
}
