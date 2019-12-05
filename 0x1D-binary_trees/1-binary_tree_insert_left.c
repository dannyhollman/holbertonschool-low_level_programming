#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node as left-child
 * @parent: pointer to parent
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	int n;

	if (parent->left != NULL)
	{
		n = parent->left->n;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = binary_tree_node(parent->left, n);
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
