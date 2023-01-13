#include "binary_trees.h"
/**
 * binary_tree_height - get depth of binary tree
 * @tree: pointer to root of binary tree
 * Return: heigth of tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int size_right, size_left, depth;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
	{
		depth = 0;
		return (depth);
	}

	size_left = binary_tree_height(tree->left);
	size_right = binary_tree_height(tree->right);

	if (size_left > size_right)
		return (size_left + 1);
	else
		return (size_right + 1);
}
/**
 * binary_tree_balance - get balance
 * @tree: pointer to root
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, balance = 0;

	if (tree == NULL)
		return (balance);

	else
	{
		if (tree->left != NULL)
			left = binary_tree_height(tree->left) + 1;

		if (tree->right != NULL)
			right = binary_tree_height(tree->right) + 1;
		balance = left - right;
	}
	return (balance);
}
