#include "binary_trees.h"

/**
* tree_height - height of the tree
* @tree: The root of the binary tree.
* Return: The height of the tree.
 */

int tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = tree_height(tree->left);

	if (tree->right != NULL)
		right_height = tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Calculate the balance factor of a binary tree.
 * @tree: The root of the binary tree.
 * Return: The balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = tree_height(tree->left);

	if (tree->right != NULL)
		right_height = tree_height(tree->right);

	return (left_height - right_height);
}
