#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: pointer to binary tree
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	printf("%d\n", tree->n);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
