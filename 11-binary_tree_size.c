#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a root node in a b_tree
 * @tree: node in bnary_tree
 *
 * Return: size of root node in binary_tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s_left  = 0, s_right = 0, res = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		s_left = 0;
	else
		s_left = binary_tree_size(tree->left);

	if (tree->right == NULL)
		s_right = 0;
	else
		s_right = binary_tree_size(tree->right);

	res = s_left + s_right + 1;
	return (res);
}
