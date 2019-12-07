#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth
 * @tree: a ptr to the tree
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n = 0;

	if (!tree)
		return (0);
	for (; tree->parent; tree = tree->parent, n++)
		;
	return (n);
}
