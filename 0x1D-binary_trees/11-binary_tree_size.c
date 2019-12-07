#include "binary_trees.h"
/**
 * binary_tree_size - returns the size
 * @tree: a node to a tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (0);
}
