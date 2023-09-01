#include "binary_trees.h"

/**
 * binary_tress_ancestor - FInds the lowest ancestor of two nodes
 *
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * @Return: Common ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent || second == first->parent)
		return (first->parent);

	return (binary_trees_ancestor(first->parent, second->parent));
}
