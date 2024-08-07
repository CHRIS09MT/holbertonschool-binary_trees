#include "binary_trees.h"

/**
* binary_tree_postorder - print a binary tree using post-order traversal
* @tree: pointer to the root of the binary tree
* @func: pointer to a function to call for each node
* Return: if tree and func is null, not return
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
