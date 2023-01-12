#include "binary_trees.h"
/**
 * binary_tree_nodes - count node with atleast one child
 * @tree: pointer to root node
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);

	if (tree->left || tree->right)
	{
		count = binary_tree_nodes(tree->left) + 1;
		count = count +binary_tree_nodes(tree->right);
	}
	return (count);
}
