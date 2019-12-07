#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: the node to a tree
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL, *right = NULL;

	if (!tree)
		return (1);

	if (tree)
	{
		if (tree->left)
			left = tree->left;
		if (tree->right)
			right = tree->right;
		if (left && right)
			return (binary_tree_is_full(left) && binary_tree_is_full(right));
		if (!(tree->left) && !(tree->right))
			return (1);
	}
	return (0);
}
