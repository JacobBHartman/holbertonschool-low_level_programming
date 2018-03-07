#include "binary_trees.h"

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @node: the node we measure
 * Return: the depth, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;

	if (node == NULL)
		return (0);

	for (depth = 0; node->parent != NULL; depth++)
		node = node->parent;

	return (depth);
}
