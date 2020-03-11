#include "binary_trees.h"

/**
 * binary_tree_height - measures od depht levels in a b_tree
 * @tree: binary tree
 *
 * Return: size of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		h_left = 0;
	else
		h_left = binary_tree_height(tree->left)  + 1;

	if (tree->right == NULL)
		h_right = 0;
	else
		h_right = binary_tree_height(tree->right) + 1;

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}

