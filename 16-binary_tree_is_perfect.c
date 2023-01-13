#include "binary_trees.h"
/**
 * binary_tree_depth - find depth of binary tree
 * @tree: pointer to root of binary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
/**
 * binary_tree_is_perfect - find if binary tree is perfect
 * @tree: pointer to root
 * Return: is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_left, depth_right, perfect_left, perfect_right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		depth_left = binary_tree_depth(tree->left);
		depth_right = binary_tree_depth(tree->right);
	}
	if (depth_left == depth_right)
	{
		perfect_left = binary_tree_is_perfect(tree->left);
		perfect_right = binary_tree_is_perfect(tree->right);
		
		if (perfect_left == perfect_right)
			return (1);
	}

	return (0);

	//if (tree->left == NULL || tree->right == NULL)
	//	return (0);

	//return (binary_tree_is_perfect(tree->left) &&
	//	binary_tree_is_perfect(tree->right));
}
