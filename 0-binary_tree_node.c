#include "binary_trees.h"

binary_tree_t *create_node(binary_tree_t *new_node, int value);

/**
 * binary_tree_node - create a node
 * @parent: root node for this child
 * @value: int value for the new node
 *
 * Return: new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
	{
		new_node = create_node(new_node, value);
		new_node->parent = NULL;
	}

	new_node = create_node(new_node, value);
	new_node->parent =  parent;

	return (new_node);
}

/**
 * create_node - creates a node new
 * @new_node: new node to create
 * @value: value for the new node
 *
 * Return: new_node
 */
binary_tree_t *create_node(binary_tree_t *new_node, int value)
{
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	return (new_node);
}
