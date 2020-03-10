#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary_tree in Pre-order Traversal
 * @tree: the binary tree
 *
 * Return: none
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = NULL, *left = NULL, *right = NULL;

	if (tree == NULL)
		return;

	current = tree;
	left = current->left;
	right = current->right;
	free(current);

	binary_tree_delete(left);
	binary_tree_delete(right);
}
