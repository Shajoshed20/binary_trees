#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverse a binary tree
 * @tree: tree pointer
 * @func: function calling node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* Create a queue for level-order transvers */
	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
	int front = 0;
	int rear = 0;

	if (!queue)
		return;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}

	free(queue);
}
