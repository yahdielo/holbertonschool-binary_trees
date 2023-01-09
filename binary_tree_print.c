#include "binary_trees.h"
/**
 *
 */
void binary_tree_print(binary_tree_t *tree)
{
	if (!tree)
		return;
	
	if(!tree->left && !tree->right)
	{
		printf("root data: %d\n", tree->n);
		return;
	}

	//if left child exist check for leaf recursively
	if (tree->left)
		binary_tree_print(tree->left);

	//if right child exists check for leaf recussively
	if (tree->right)
		binary_tree_print(tree->right);
}
