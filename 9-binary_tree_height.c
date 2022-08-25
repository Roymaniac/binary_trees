#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to traverse
 *
 * Return: int -> height of a binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left != NULL)
			left_height = binary_tree_height(tree->left) + 1;
		if (tree->right != NULL)
			right_height = binary_tree_height(tree->right) + 1;
		return (MAX(left_height, right_height));
	}
}
