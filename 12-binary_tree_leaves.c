#include "binary_trees.h"

/**
* binary_tree_leaves - print the numbers the leaves in a binary tree
* @tree: pointer to the root of the binary tree
* Return: the number of leaves in the binary tree or 0 if tree is NULL or empty
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
