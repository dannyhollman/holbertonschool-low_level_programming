#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child
 * @parent: pointer to parent
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	int n;

	if (parent->right != NULL)
	{
		n = parent->right->n;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = binary_tree_node(parent->right, n);
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
