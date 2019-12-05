#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child
 * @parent: pointer to parent
 * @value: value of new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	else if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = binary_tree_node(parent, value);
		temp->parent = parent->right;
		parent->right->right = temp;
	}
	else
		parent->right = binary_tree_node(parent, value);

	return (parent->right);
}
