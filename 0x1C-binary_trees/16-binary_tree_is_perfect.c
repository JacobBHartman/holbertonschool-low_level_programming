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
		is_full = binary_tree_is_full(tree->right);
	}
	else
		is_full = 0;

	return (is_full);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if true, 0 if else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_size;
	size_t rite_size;
	int is_full;
	if (tree == NULL)
		return (0);

	left_size = binary_tree_size(tree->left);
	rite_size = binary_tree_size(tree->right);
	is_full = binary_tree_is_full(tree);
	if (left_size == rite_size && is_full)
		return (1);
	else
		return (0);
}
