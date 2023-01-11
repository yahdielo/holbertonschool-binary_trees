#include "binary_trees.h"
/**
 * binary_tree_preorder - search tree with preorder algo
 * @tree: pointer to root of the tree
 * @func: fucntions to call and print the tree elements
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
