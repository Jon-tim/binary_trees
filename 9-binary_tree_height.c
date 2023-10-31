#include "binary_trees.h"
/**
 * binary_tree_height -  a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height or 0, If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (!tree)
		return (0);

	left_count = binary_tree_height(tree->left);
	right_count = binary_tree_height(tree->right);

	return (left_count > right_count ? left_count + 1 : right_count + 1);
}
