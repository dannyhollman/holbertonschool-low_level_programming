#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes with at least on child
 * @tree: is a pointer to the tree
 * Return: the number of nodes with one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (!tree->right && !tree->left)
			;
		else
			n += 1;

		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + n);
	}
	return (0);
}
