#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left  = 0, s_right = 1;
	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		s_left = 0;
	else
		s_left = binary_tree_size(tree->left) + 1;

	if (tree->right == NULL)
		s_right = 0;
	else
		s_right = binary_tree_size(tree->right) + 1;

	return (s_left + s_right);
}
