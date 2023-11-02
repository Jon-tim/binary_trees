#include "binary_trees.h"
int custom_power(int num);
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 1, If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0, size = 0;

	if (tree)
	{
		height = binary_tree_height(tree) + 1;
		size = binary_tree_size(tree);
		return (custom_power(height) - 1 == size ? 1 : 0);
	}
	return (0);
}

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

/**
 * binary_tree_height -  a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height of the binary tree or 0, If tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree)
	{

		if (tree->left)
		{
			left_height = binary_tree_height(tree->left) + 1;
		}
		if (tree->right)
		{
			right_height = binary_tree_height(tree->right) + 1;
		}

		return ((left_height > right_height ? left_height : right_height));
	}
	return (0);
}

/**
 * custom_power - calculates the power of a given exponent
 * @num: exponent
 * Return: result
 */
int custom_power(int num)
{
	int result = 1;

	for (int i = 0; i < num; i++)
	{
		result *= 2;
	}
	return (result);
}
