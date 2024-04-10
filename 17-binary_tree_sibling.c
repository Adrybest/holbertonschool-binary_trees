#include "binary_trees.h"
/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: node of the tree
 * Return: the node or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left == node)/*check if it's the left son of its parent*/
	{
		return (node->parent->right);
	}/*return its brother or NULL if it has no brother*/
	return (node->parent->left);
}
