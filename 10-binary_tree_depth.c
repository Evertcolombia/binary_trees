#include "binary_trees.h"

/**
 * binary_tree_depth - gives the depth of a root in  a b_tree
 * @tree: root node in binary_tree
 *
 * Return: depth of root in binary_tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		depth = 0;
	else
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
