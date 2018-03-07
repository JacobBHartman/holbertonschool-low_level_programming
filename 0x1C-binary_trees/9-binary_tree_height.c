#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the height, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t L = 0;
	size_t R = 0;

	if (!tree)
		return (0);

	if (tree->left)
		L = 1 + binary_tree_height(tree->left);
	if (tree->right)
		R = 1 + binary_tree_height(tree->right);

	return ((L > R) ? L : R);
}
