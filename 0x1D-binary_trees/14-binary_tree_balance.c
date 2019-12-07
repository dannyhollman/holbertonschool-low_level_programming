#include "binary_trees.h"
/**
 * binary_tree_balance - gets the balance factor of the tree
 * @tree: node to the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = _lambda4(tree->left, 0);
		if (tree->right)
			right = _lambda4(tree->right, 0);
		/*printf("[%d] l = %d r = %d\n", tree->n, left, right);*/
		return (left - right);
	}
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
