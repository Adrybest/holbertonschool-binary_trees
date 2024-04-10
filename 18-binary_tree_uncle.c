#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - fction to find uncle
 * @node: in question
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

  binary_tree_t *sibling;
  
if (node == NULL || node->parent == NULL)
return (NULL);

 *sibling = binary_tree_sibling(node);
 
if (sibling == NULL || sibling->parent == NULL)
return (NULL);

return (sibling->parent);
}
