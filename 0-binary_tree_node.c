#include "binary_trees.h"
/**
 *
 *
 */

struct binary_tree_s *create(int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	if(parent == NULL)
		return (NULL);

	binary_tree_t *root = create(value);

	root->parent = parent;


	return (root);
}
