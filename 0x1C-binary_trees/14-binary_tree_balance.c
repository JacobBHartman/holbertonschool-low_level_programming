#include "binary_trees.h"

/**
 * binary_tree_height_actual - measure the height of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the height, 0 if tree is NULL
 */
size_t binary_tree_height_actual(const binary_tree_t *tree)
{
        size_t L = 0;
        size_t R = 0;

        if (!tree)
                return (0);
	else
		L = R = 1;

        if (tree->left)
                L = 1 + binary_tree_height(tree->left);
        if (tree->right)
                R = 1 + binary_tree_height(tree->right);

        return (L > R ? L : R);
}

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree
 * Return: the difference in heights of the sub-trees
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int dif;

	if (tree == NULL)
		return (0);

	dif = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (dif);
}
