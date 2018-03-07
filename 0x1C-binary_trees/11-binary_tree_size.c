#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: the size, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (1 + size);
}
