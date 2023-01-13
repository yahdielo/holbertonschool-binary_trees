#include "binary_trees.h"
/**
 * binary_tree_uncle - find node uncle in binery tree
 * @node: pointer to root
 * Return: uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent != node->parent->parent->right)
		return (node->parent->parent->right);

	if (node->parent != node->parent->parent->left)
		return (node->parent->parent->left);

	return (NULL);
}
