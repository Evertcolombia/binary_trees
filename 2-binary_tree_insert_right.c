#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node at right
 * @parent: parent node
 * @value: value for new node
 *
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *current = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	new_node->n = value;
	new_node->parent = parent;

	if (parent->right)
	{
		current = parent->right, current->parent = new_node;
		new_node->right = current;
		parent->right = new_node;
	}
	else
		parent->right = new_node;
	return (new_node);
}
