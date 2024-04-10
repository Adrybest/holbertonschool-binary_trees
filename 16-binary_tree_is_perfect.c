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
int size;
int height;
int perfect_nodes = 1;
int count_height;

if (tree == NULL)
return (0);

size = binary_tree_size(tree);
height = binary_tree_height(tree);

for (count_height = 0; count_height < height; count_height++)

perfect_nodes *= 2;
perfect_nodes -= 1;

return (size == perfect_nodes);

}
