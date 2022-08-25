#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes in a binary tree
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes
 *
 * Return: int -> nodes of a binary tree
 * NULL -> pointer is not a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
	{
		count = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	}

	return (count);


}
