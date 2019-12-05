#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child
 * @parent: pointer to parent
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	else if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = binary_tree_node(parent, value);
		temp->parent = parent->left;
		parent->left->left = temp;
	}
	else
		parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
