#include "binary_trees.h"
/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int a = 1;
	int start = 0;
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1000);
	int head = 0;
	int tail = 0;

	queue[tail++] = (binary_tree_t *) tree;

	while (head < tail)
	{
		binary_tree_t *now = queue[head++];

		if (!now)
		{
			start = 1;
		}
		else
		{
			if (start)
			{
				a = 0;
				break;
			}

			queue[tail++] = now->left;
			queue[tail++] = now->right;
		}
	}

	free(queue);
	return (a);
}
