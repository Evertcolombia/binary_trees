#include "binary_trees.h"

/**
 * binary_tree_sibling - looks for the sibling of a node
 * @node: node from binary_tree
 *
 * Return: Node or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	tmp = node->parent;

	if (tmp->left && tmp->right)
	{
		if (tmp->left == node)
			return (tmp->right);
		else
			return (tmp->left);
	}
	else
		return (NULL);
}
