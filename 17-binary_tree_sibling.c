#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of a given binary tree node.
 * @node: Pointer to the binary tree node whose sibling is to be found.
 * Return:the sibling node, or NULL if the node is NULL or its parent is NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return
		(node->parent->left == node ? node->parent->right : node->parent->left);
}
