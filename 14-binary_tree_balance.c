#include "binary_trees.h"

int binary_tree(const binary_tree_t *tree);
/**
 * binary_tree_balance - measure the balance from a node n b_tree
 * @tree: node form a binary_tree as root
 *
 * Return: meausre of balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
		return (0);

	res = binary_tree(tree);
	return (res);
}

/**
 * binary_tree - measures od depht levels in a b_tree
 * @tree: binary tree
 *
 * Return: size of binary tree
 */
int binary_tree(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h_left = binary_tree(tree->left)  + 1;
	else
		h_left += h_left;

	if (tree->right)
		h_right = binary_tree(tree->right) + 1;
	else
		h_right += h_right;

	return (h_left - h_right);
}
