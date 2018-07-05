#include "binary_trees.h"

/**
 * bst_remove - removes a node from a Binary Search Tree
 * @root: pointer to the root node of the BST
 * @value: value to delete in the tree
 * Return: pointer to new root
 */
bst_t *bst_remove(bst_t *root, int value);
{
	if (root == NULL)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	if (value > tree->n)
		return (bst_search(tree->right, value));
	return (NULL);
}
