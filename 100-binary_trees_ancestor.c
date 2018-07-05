#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @node: the input node address
 * Return: depth of the binary tree
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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer for the first node
 * @second: pointer to second node
 * Return: lowest common ancestor node of the two given nodes or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t f, s;
	binary_tree_t *f_holder, *s_holder;

	f_holder = (binary_tree_t *)first;
	s_holder = (binary_tree_t *)second;
	if (f_holder == NULL || s_holder == NULL)
		return (NULL);
        f = binary_tree_depth(f_holder);
	s = binary_tree_depth(s_holder);
	while (f > s)
	{
		f_holder = f_holder->parent;
		f--;
	}
	while (f < s)
	{
		s_holder = s_holder->parent;
		s--;
	}
	while (f_holder != s_holder)
	{
		f_holder = f_holder->parent;
		s_holder = s_holder->parent;
	}
	return (f_holder);
}
