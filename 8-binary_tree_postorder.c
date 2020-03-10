#include "binary_trees.h"

/**
 * binary_tree_postorder - print b_tree in post-order traversal
 * @tree: binary_tree
 * @func: pointer to function
 *
 * return: none
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
