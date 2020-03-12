#include "binary_trees.h"

/**
 * binary_tree_is_full - lok if a node is full in a b_Tree
 * @tree: node to ask in a bnary_tree
 *
 * Return: 1 on success 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
