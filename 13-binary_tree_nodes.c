#include "binary_trees.h"

/**
 * binary_tree_nodes - count the leaf nodes in bnary_tree
 * @tree: root node form a binary tree
 *
 * Return: coun of leaf nodes from root pass as argument
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);

	else
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
