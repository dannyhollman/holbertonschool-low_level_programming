#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves
 * @tree: ptr to tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;
	const binary_tree_t *l, *r;

	if (tree)
	{
		if (!tree->left && !tree->right)
			n = 1;
		l = tree->left;
		r = tree->right;
		return (binary_tree_leaves(l) + binary_tree_leaves(r) + n);
	}
	return (0);
}
