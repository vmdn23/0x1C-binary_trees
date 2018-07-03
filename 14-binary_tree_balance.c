#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the input root address
 * Return: height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
	if (ls > rs)
		return (ls + 1);
	return (rs + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the input root address
 * Return: balance of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rh, lh;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL)
		lh = 0;
	else
		lh = binary_tree_height(tree->left) + 1;
	if (tree->right == NULL)
		rh = 0;
	else
		rh = binary_tree_height(tree->right) + 1;
	return (lh - rh);
}
