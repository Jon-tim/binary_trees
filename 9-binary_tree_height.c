#include "binary_trees.h"
/**
 * binary_tree_height -  a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height or 0, If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;
	const binary_tree_t *cur;

	if (tree)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (1 + (left_height > right_height ? left_height : right_height));
	}
	return (0);
}
