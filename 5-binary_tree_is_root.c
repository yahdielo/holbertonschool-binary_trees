#include "binary_trees.h"
/**
 * binary_tree_is_root - find if node is root
 * @node: node to check if is root
 * Return: always 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
