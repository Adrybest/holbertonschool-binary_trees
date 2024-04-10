#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: root
 * Return: 1 if its complete else 0.
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||/*lookif left exist*/
		(tree->left == NULL && tree->right != NULL) ||/*check if right exist*/
		binary_tree_is_full(tree->left) == 0 ||/*look if left subtree is full*/
		binary_tree_is_full(tree->right) == 0)/*look if right subtree is full*/
		{
			return (0);
		}
	}
	return (1);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_is_full(tree));
}
