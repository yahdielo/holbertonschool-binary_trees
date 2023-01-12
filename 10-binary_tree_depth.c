
#include "binary_trees.h"
/**
 * binary_tree_depth - find depth of binary tree
 * @tree: pointer to root of binary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->left);
	depth = binary_tree_depth(tree->right);

	return (depth + 1);
}
