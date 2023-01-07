#include "binary_tree.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return NULL;

	newnode	= malloc(sizeof(binary_tree_t));

	parent->left = newnode;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;

	return (newnode);
}
