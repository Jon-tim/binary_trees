#include "binary_trees.h"
/**
 * binary_tree_nodes - a function that counts the nodes in a binary tree
 * @tree:  a pointer to the root node of the tree to count the number of nodes
 * Return: nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
		{
			nodes++;
		}
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		return (nodes);
	}
	return (0);
}
