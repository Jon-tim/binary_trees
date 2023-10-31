#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function that inserts a node as
 * the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL on failure
 * or if the parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->n = value;
	right_child->parent = parent;

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
		parent->right = right_child;
	}
	else
	{
		parent->right = right_child;
	}

	return (right_child);
}
