#include "binary_trees.h"

/**
 * binary_tree_is_leaf - know if a nod is leaf
 * @node: node to ask
 *
 * Return: 1 on success
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);
	return (0);
}
