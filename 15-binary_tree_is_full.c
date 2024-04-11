#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: root
 * Return: 1 if its complete else 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
		if (tree == NULL)
	{
		return (0);
	}

		if ((tree->left != NULL && tree->right == NULL) ||/*lookif left exist*/
		(tree->left == NULL && tree->right != NULL))/*check if right exist*/
		{
			return (0);
		}

		if (tree->left == NULL && tree->right == NULL)
		{
			return (1);
		}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
