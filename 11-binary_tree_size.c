#include "binary_trees.h"
/**
 * binary_tree_size -  a function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size.
 * Return: size or 0, If tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, l = 0, r = 0;

	if (tree)
	{
		l = binary_tree_size(tree->left);
		r = binary_tree_size(tree->right);
		return (size = l + r + 1);
	}
	return (0);
}
