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

	newnode = malloc(sizeof(binary_tree_t));


	if (newnode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
	
		childnode = malloc(sizeof(binary_tree_t));

		childnode = parent->left;
		newnode->parent = parent;
		childnode->parent = newnode;
		newnode->left =childnode;
		newnode->n = value;
		newnode->right = NULL;
		childnode->left = NULL;
		childnode->right = newnode;
	}
	else
	{
	parent->left = newnode;
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	}

	return (newnode);
}
