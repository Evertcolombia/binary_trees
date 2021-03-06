#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - insert a child node n the parent->left
 * @parent: root to the child node
 * @value: value for new node
 *
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t  *new_node = NULL, *current = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	new_node->n = value;
	new_node->parent = parent;

	if (parent->left)
	{
		current = parent->left, current->parent = new_node;
		parent->left = new_node;
		new_node->left = current;
	}
	else
		parent->left = new_node;
	return (new_node);
}
