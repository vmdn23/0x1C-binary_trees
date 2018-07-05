#include "binary_trees.h"

/**
 * is_bst - checks if a binary tree is BST
 * @tree: the input root address
 * @min: minimum value of int
 * @max: maximum value of int
 * Return: 1 if true 0 if false
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= min || tree->n >= max)
		return (0);
	return ((is_bst(tree->left, min, tree->n)) &&
		(is_bst(tree->right, tree->n, max)));
}



/**
 * binary_tree_is_bst - checks if a binary tree is BST
 * @tree: the input root address
 * Return: 1 if true 0 if false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
