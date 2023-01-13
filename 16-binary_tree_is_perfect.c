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
/**
 * binary_tree_is_perfect - find if binary tree is perfect
 * @tree: pointer to root
 * Return: is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int level = 0, depth = binary_tree_depth(tree);

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
