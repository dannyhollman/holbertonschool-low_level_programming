#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: ptr to tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int x = 0, y = 0;

	if (tree)
	{
		if (tree->right && tree->left)
		{
			if (tree->left->right && tree->left->left)
				x -= 1;
			x += binary_tree_is_perfect(tree->left);

			if (tree->right->left && tree->right->right)
				y -= 1;
			y += binary_tree_is_perfect(tree->right);
		}
		else if (!tree->left && !tree->right)
			return (1);
		else
			return (0);
		/*printf("node->[%d] %dx - %dy = %d\n", tree->n, x, y, x - y);*/
	}
	if (!(x - y))
		return (1);
	return (0);
}
