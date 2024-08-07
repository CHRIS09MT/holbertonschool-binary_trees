#include "binary_trees.h"

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
    		left_height = binary_tree_balance(tree->left) + 1;
	if (tree->right!= NULL)
    		right_height = binary_tree_balance(tree->right) + 1;

    	return (left_height - right_height);
}