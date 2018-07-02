#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the input root address
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rs;
	size_t ls;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
        if (ls > rs)
		return (ls + 1);
	return (rs + 1);
}
