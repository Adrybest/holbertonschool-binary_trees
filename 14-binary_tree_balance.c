#include "binary_trees.h"

/**
 * binary_tree_balance - fction to equi right and left
 * @tree: root
 * Return: left height - right height
 */

int binary_tree_balance(const binary_tree_t *tree)
{

size_t left_height;
size_t right_height;

if (tree == NULL)
return (0);

else
{
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return (left_height - right_height);
}
}
