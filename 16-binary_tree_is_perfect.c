#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect -   checks if a binary tree is perfect
 * @tree:   is a pointer to the root node of the tree to check
 *
 * Return: 1 ->  binary tree is perfect
 * 0 -> If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t chck1, chck2;

	if (tree == NULL)
		return (0);

	chck1 = binary_tree_size(tree->left);
	chck2 = binary_tree_size(tree->right);
	if (chck1 == chck2)
		return (1);

	return (0);
}
