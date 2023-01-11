#include "binary_trees.h"
/**
 * binary_tree_inorder - print binary tree in order
 * @tree: pointer to tree root
 * @func: fucntion to print tree element
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
