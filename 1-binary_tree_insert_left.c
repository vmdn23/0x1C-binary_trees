#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a node on the left of root
 * @parent: parent of the left-child
 * @value: value to store in the new node
 * Return: node address of the binary tree or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = parent->left;

	if (parent->left)
	{
		node->left->parent = node;
	}

	parent->left = node;
	node->right = NULL;
	return (node);
}
