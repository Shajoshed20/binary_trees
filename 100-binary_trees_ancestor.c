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
	const binary_tree_t *pop;
	const binary_tree_t *popp;

	if (!first || !second)
		return (NULL);

	pop = first;

	while (pop)
	{
		popp = second;

		while (popp)
		{
			if (pop == popp)
				return ((binary_tree_t *)pop);
			popp = popp->parent;
		}
		pop = pop->parent;
	}

	return (NULL);
}
