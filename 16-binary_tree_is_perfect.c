#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - look is a node is perfect
 * @tree: node in binary_tree
 *
 * Return: 0 on failure 1 on success
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, i = 1, size = 0, res = 2;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	for (; i < (height + 1); i++)
		res *= 2;

	if ((res - 1) == size || size == 0)
	return (1);
	else
		return (0);
}
