#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_balance - measure the balance from a node n b_tree
 * @tree: node form a binary_tree as root
 *
 * Return: meausre of balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, res = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		left = 0;
	else
		left = binary_tree_balance(tree->left) + 1;

	if (tree->right == NULL)
		right = 0;
	else
		right = binary_tree_balance(tree->right) + 1;

	res = left - right;
	return (res);
}
