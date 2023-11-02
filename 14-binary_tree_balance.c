#include "binary_trees.h"
/**
 * binary_tree_balance - a function that measures
 * the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to  measure the balance factor
 * Return: balance or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height -  a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: height or 0, If tree is NULL
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
		else
		{
			left_height = 1;
		}

		if (tree->right)
		{
			right_height = binary_tree_height(tree->right) + 1;
		}
		else
		{
			right_height = 1;
		}

		return ((left_height > right_height ? left_height : right_height));
	}
	return (0);
}
