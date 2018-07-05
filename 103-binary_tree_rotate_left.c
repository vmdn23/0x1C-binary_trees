#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *node;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	node = tree->right;
	node->parent = tree->parent;
	tree->parent = node;
	tree->right = node->left;
	node->left = tree;

	return(node);
}
