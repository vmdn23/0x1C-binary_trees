#include "binary_trees.h"

/**
 * binary_tree_nodes  - counts nodes with at least 1 child in a binary tree
 * @tree: the input root address
 * Return: number of node with child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}
