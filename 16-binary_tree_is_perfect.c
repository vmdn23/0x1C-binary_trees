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
	if (ls < rs)
		return (rs + 1);
	return (ls + 1);
}


/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: the input root address
 * Return: size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the input root address
 * Return: 1 if perfect 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, count = 0;
	int power = 1;

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	while (count <= height)
	{
		power *= 2;
		count++;
	}

	if (power - 1 == size)
		return (1);

	return (0);
}
