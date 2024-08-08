#include "binary_trees.h"

/**
* binary_tree_is_full - verify if a node is full
* @tree: pointer to the root of the binary tree to check
* Return: if the node is full return 1, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
