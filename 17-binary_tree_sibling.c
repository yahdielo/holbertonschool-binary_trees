#include "binary_trees.h"
/**
 * binary_tree_sibling - find node sibling
 * @node: pointer to node
 * Return: node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node != node->parent->right)
		return (node->parent->right);

	return (node);
}
