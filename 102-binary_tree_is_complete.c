#include "binary_trees.h"
static queue_node_t *queue_push(queue_node_t *rear, const binary_tree_t *node);
static queue_node_t *queue_pop(queue_node_t *front);
/**
 * queue_push - Enqueues a binary tree node.
 * @rear: A pointer to the rear of the queue.
 * @node: A pointer to the binary tree node to enqueue.
 * Return: A pointer to the new rear of the queue.
 */
static queue_node_t *queue_push(queue_node_t *rear, const binary_tree_t *node)
{
	queue_node_t *new_node = malloc(sizeof(queue_node_t));

	if (!new_node)
	{
		perror("Memory allocation error");
		exit(EXIT_FAILURE);
	}

	new_node->node = node;
	new_node->next = NULL;

	if (!rear)
		return (new_node);

	rear->next = new_node;
	return (new_node);
}

/**
 * queue_pop - Dequeues a binary tree node.
 * @front: A pointer to the front of the queue.
 * Return: A pointer to the new front of the queue.
 */
static queue_node_t *queue_pop(queue_node_t *front)
{
	if (!front)
		return (NULL);

	queue_node_t *next_node = front->next;

	free(front);
	return (next_node);
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	queue_node_t *queue = NULL;
	int level_started = 0;

	if (!tree)
		return (0);

	queue = queue_push(queue, tree);

	while (queue)
	{
		const binary_tree_t *current = queue->node;

		queue = queue_pop(queue);

		if (!current)
		{
			level_started = 1;
		}
		else
		{
			if (level_started)
				return (0);

			queue = queue_push(queue, current->left);
			queue = queue_push(queue, current->right);
		}
	}

	return (1);
}
