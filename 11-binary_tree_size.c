#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: tree
 * Return: 0
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t taille = 0;

	if (tree != NULL)
	{
		taille += 1;
		taille += binary_tree_size(tree->left);
		taille += binary_tree_size(tree->right);
	}
	return (taille);
}
