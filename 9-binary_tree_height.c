#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t size_right, size_left, depth;

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
