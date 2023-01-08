#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a new node to the left of parent
 * @parent: parent node
 * @value: value to store in newnode
 * Return: newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *childnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	if (parent->left != NULL)
	{
		childnode = parent->left;
		parent->left = newnode;
		newnode->left = childnode;
		childnode->parent = newnode;
	}
	else
	{
		parent->left = newnode;
		newnode->left = NULL;

	}

	return (newnode);
}
