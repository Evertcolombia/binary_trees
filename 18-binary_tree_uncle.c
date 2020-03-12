#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent->parent == NULL)
		return (NULL);

	else
		tmp = node->parent->parent;

	if (tmp->left && tmp->right)
	{
		if (tmp->left->left == node || tmp->left->right == node)
			return (tmp->right);

		else
			return (tmp->left);
	}
	else
		return (NULL);
}
