#include "binary_trees.h"
#include <stdio.h>
int binary_tree(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h_left = binary_tree(tree->left);
	if(tree->right)
		h_right = binary_tree(tree->left);
	
	printf("left: %d\n", h_left);
	printf("right: %d\n", h_right);
	if (h_left == h_right)
		return (1);
	else
		return(0);

}

int binary_tree(const binary_tree_t *tree)
{
	int h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		if (tree->left && tree->right)
			h_left = binary_tree(tree->left)  + 1;
	}
	if (tree->right)
	{
		if (tree->left && tree->right)
			h_right = binary_tree(tree->right) + 1;
	}
	return(h_left + h_right);
}
