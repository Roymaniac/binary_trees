#include "binary_trees.h"

/**
* binary_tree_sibling -    finds the sibling of a node
* @node: finds the sibling of a node
*
* Return: a pointer to the sibling node
*/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
	{
		return (node->parent->right);
	}

	if (node->parent->right == node && node->parent->left)
	{
		return (node->parent->left);
	}

	return (NULL);
}

/**
 * binary_tree_uncle -  finds the uncle of a node
 * @node:   is a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * NULL -> Return NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
