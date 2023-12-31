#include "binary_trees.h"
/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 1 if full, If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		l = binary_tree_is_full(tree->left);
		r = binary_tree_is_full(tree->right);

		if (l && r && tree->left && tree->right)
			return (1);
	}
	return (0);
}
