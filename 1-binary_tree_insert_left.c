#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the struct
 * @value: int
 * Return: a pointer to the created node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert;

	if (parent == NULL)
	{
		return (NULL);
	}

	insert = binary_tree_node(parent, value);
	if (insert == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		insert->left = parent->left;
		parent->left->parent = insert;
	}

	parent->left = insert;

	return (insert);
}
