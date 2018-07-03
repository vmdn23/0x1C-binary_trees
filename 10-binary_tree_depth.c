#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: the input root address
 * Return: height of the binary tree
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t c = 0;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		node = node->parent;
		c++;
	}
	return (c);
}
