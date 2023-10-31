#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node as
 * the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL on failure
 * or if the parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->n = value;
	left_child->parent = parent;

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
		parent->left = left_child;
	}
	else
	{
		parent->left = left_child;
	}

	return (left_child);
}
