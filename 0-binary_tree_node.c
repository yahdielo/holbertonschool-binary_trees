#include "binary_trees.h"
/**
 * binary_tree_node - creat a binary tree node
 * @parent: parent node
 * @value: value n inside node
 * Return: newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
