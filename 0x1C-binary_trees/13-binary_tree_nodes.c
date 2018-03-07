#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: 1 if true, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node == NULL)
                return (0);
        if (node->left == NULL && node->right == NULL)
                return (1);
        else
                return (0);
}


/**
 * binary_tree_nodes - count the ndoes with at least 1 child
 * @tree: a pointer to the root ndoe of the tree to count
 * Return: the number of nodes, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t parents = 0;

	if (tree == NULL)
		return (0);

	parents += binary_tree_nodes(tree->left);
	parents += binary_tree_nodes(tree->right);
	parents += 1 - binary_tree_is_leaf(tree);

	return (parents);
}
