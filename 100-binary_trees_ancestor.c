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
	binary_tree_t *common1;
	binary_tree_t *common2;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	common1 = first->parent;
	common2 = second->parent;

	if (first == common2 || !common1 || (!common1->parent && common2))
		return (binary_trees_ancestor(first, common2));
	else if (common1 == second || !common2 || (!common2->parent && common1))
		return (binary_trees_ancestor(common1, second));
	return (binary_trees_ancestor(common1, common2));
}
