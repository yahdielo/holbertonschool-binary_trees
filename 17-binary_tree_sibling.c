#include "binary_trees.h"
/**
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t right, left;

	if (!node || !node->parent)
		return (NULL);

	if (node->left != NULL && node->right != NULL)
	{
		left = binary_tree_sibling(node->left);
		right = binary_tree_sibling(node->right);
	}

	return (sibling);
}
