#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: a pointer to the node
 * Return: a pointer to the uncle, NULL if fail
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent->right == NULL)
		return (NULL);
	else if (parent->parent->left == NULL)
		return (NULL);
	else if (parent->parent->right == parent)
		return (parent->parent->left);
	else if (parent->parent->left == parent)
		return (parent->parent->right);
	else
		return (NULL);
}
