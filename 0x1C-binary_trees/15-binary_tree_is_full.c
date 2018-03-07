#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree
 * Return: 1 if true, 0 if false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		is_full = 1;
	else if (tree->left != NULL && tree->right != NULL)
	{
		is_full = binary_tree_is_full(tree->left);
		if (is_full == 0)
			return (is_full);
		is_full = binary_tree_is_full(tree->right);
	}
	else
		is_full = 0;

	return (is_full);
}
