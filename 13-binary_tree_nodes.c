#include "binary_trees.h"

/**
* binary_tree_nodes - print the numbers the nodes of a binary tree
* @tree: pointer to the root of the binary tree
* Return: the number of nodes with at least 1 child or 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
