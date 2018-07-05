#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the first element of the array to be converted
 * @size: number of element in the array
 * Return: pointer to the root node of the created BST or NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *node = NULL;
	size_t i = 0;

	if (array == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		bst_insert(&node, array[i]);
		i++;
	}
	return (node);
}
