#include "binary_trees.h"

/**
* binary_tree_t - creating a binary tree
* @parent: parent node
* @value: value to be stored in the node
* Return: pointer to the new node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node )
        	return NULL;

	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

        return (new_node);
}