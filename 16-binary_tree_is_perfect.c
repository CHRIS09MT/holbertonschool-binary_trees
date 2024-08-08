#include "binary_trees.h"

/**
* binary_tree_height - print the height of a binary tree
* @tree: pointer to the root of the binary tree
* Return: height of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	return (right_height);
}

/**
* binary_tree_is_perfect - verify if the binary tree is perfect
* @tree: pointer to the root of the binary tree to check
* Return: if the binary tree is perfect return 1, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	return (binary_tree_is_perfect(tree->left)
	&& binary_tree_is_perfect(tree->right));
}
