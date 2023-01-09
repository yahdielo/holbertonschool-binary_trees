#include "binary_trees.h"
/**
 *
 */
void binary_tree_print(binary_tree_t *root)
{
	if (!root)
		return;
	
	if(!root->left && !root->right)
	{
		printf("root data: %d\n", root->n);
		return;
	}

	//if left child exist check for leaf recursively
	if (root->left)
		binary_tree_print(root->left);

	//if right child exists check for leaf recussively
	if (root->right)
		binary_tree_print(root->right);
}
