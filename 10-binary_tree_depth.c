#include "binary_trees.h"

/**
* binary_tree_depth - print the depth of a binary tree
* @tree: a pointer to the root of the binary tree
* Return: return the depth of the binary tree, or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
