#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - fction
 * @tree: root
 * Return: compare to see if tree is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height = 0;
int nodes = 0;

if (tree == NULL)
return (0);

height = binary_tree_height(tree);
nodes = binary_tree_size(tree);

return (nodes == (1 << (height + 1)) - 1);
}
