#include "binary_trees.h"
/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: tree
 * Return: 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{


	if (tree)
	{
		size_t l, r;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/*assigns the height of tree's left branch to the variable l and r*/
		/*if it exists, otherwise it assigns the value 0*/
		return ((l > r) ? l : r);
	}
	return (0);
}
