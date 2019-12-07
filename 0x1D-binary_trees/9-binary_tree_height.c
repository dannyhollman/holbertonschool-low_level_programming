#include "binary_trees.h"
/**
 * binary_tree_height - get the height of a node
 * @tree: ptr to tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (_lambda4(tree, 0) - 1);
	return (0);
}

/**
 * _lambda4 - gets height
 * @node: returns size
 * @n: size to return
 * Return: height
 */
size_t _lambda4(const binary_tree_t *node, size_t n)
{
	size_t l = 0, r = 0;

	if (!node)
		return (0);
	if (node->left)
		l = _lambda4(node->left, n);
	if (node->right)
		r = _lambda4(node->right, n);
	if (l > r)
		return (l + 1);
	return (r + 1);
}
