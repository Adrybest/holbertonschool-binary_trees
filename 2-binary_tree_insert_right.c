#include "binary_trees.h"

/**
 * binary_tree_insert_right - fction
 * @parent: parend node
 * @value: var value
 * Return: right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *replace_right_node;

if (parent == NULL)
return (NULL);

replace_right_node = binary_tree_node(parent, value);

if (replace_right_node == NULL)
return (NULL);

if (parent->right != NULL)
{
	replace_right_node->right = parent->right;
	parent->right->parent = replace_right_node;
}
parent->right = replace_right_node;

return (replace_right_node);
}
