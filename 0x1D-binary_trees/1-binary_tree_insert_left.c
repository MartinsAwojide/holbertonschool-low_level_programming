#include "binary_trees.h"

/**
  *binary_tree_insert_left - inserts a node as the left-child of another node
  *@parent: is a pointer to the parent node of the node to create
  *@value: is the value to put in the new node
  *Return: a pointer to the new node.
  */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = binary_tree_node(parent, value);
	if (left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = left_child;
		left_child->left = parent->left;
	}
	parent->left = left_child;
	return (left_child);
}
