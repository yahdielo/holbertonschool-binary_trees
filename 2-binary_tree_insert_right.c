#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a new node  on the right
 * @value: value to be store inside node
 * @parent: parent node
 * Return: newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *childnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL || newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->left = left;
	newnode->n = value;

	if (parent->right != NULL)
	{
		childnode = parent->right;
		newnode = parent->right;
		childnode = newnode->right;
		childnode->parent = newnode;
	}
	else
	{
		parent->right = newnode;
		newnode->right = NULL
	}

	return (newnode);
}
