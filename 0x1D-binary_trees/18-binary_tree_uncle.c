#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of the node
 * @node: node of which we have to find the uncle for
 * Return: the uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandpa;

	if (node)
	{
		if (node->parent)
		{
			parent = node->parent;
			if (parent->parent)
			{
				grandpa = parent->parent;
				if (grandpa->left && grandpa->left != parent)
					return (grandpa->left);
				if (grandpa->right && grandpa->right != parent)
					return (grandpa->right);
			}
		}
	}
	return (NULL);
}
