#include "binary_trees.h"
#include <stdio.h>

int look_right(const binary_tree_t *tree, int c);
int look_levels(const binary_tree_t *tree, int c);

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0, h_right = 0;

	height = look_levels(tree->left, height);
	h_right = look_right(tree, h_right);

	printf("right : %d\n", h_right);
	if (h_right > height)
		return (h_right);
	else
		return (height);

}

int look_levels(const binary_tree_t *tree, int c)
{
	if (tree == NULL)
		return (c);
	c++;
	look_levels(tree->left, c);
	return (c);
}

int look_right(const binary_tree_t *tree, int c)
{
	if (tree == NULL)
                return (c);
        c++;
	printf("%d\n", tree->n);
        look_right(tree->right, c);
	
        return (c);
}

