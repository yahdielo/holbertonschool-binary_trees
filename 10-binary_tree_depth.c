#include "binary_trees.h"
/**
 * binary_tree_depth - find depth of binary tree
 * @tree: pointer to root of binary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_left, depth_right;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	depth_left = binary_tree_depth(tree->left);
	depth_right = binary_tree_depth(tree->right);

	if (depth_left > depth_right)
		return (depth_left + 1);
	else
		return (depth_right + 1);
}
