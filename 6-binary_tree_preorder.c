#include "binary_trees.h"

/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* @tree: pointer to the root of the binary tree
* @func: pointer to a function to call for each node
* Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);

}
