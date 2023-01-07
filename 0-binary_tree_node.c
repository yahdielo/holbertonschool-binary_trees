#include "binary_trees.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode	= malloc(sizeof(binary_tree_t));

	parent->left = newnode;
	newnode->n = value;
	newnode->right = NULL;
	newnode->left = NULL;
	parent->right = newnode;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
