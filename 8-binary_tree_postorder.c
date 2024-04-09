#include "binary_trees.h"

/**
 * binary_tree_postorder - fction to go through tree post-order
 * @tree: root
 * @func: pointer to func
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

if (tree == NULL)
{
}

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);

if (func != NULL)
{
func(tree->n);
}
}
