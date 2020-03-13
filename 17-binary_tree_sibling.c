#include "binary_trees.h"
/**
  *binary_tree_sibling - finds sibling of a binary tree node
  *@node: pointer to BT node
  *Return: pointer to sibling or NULL
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
	{
		if (node->parent->right)
			return (node->parent->right);
		return (NULL);
	}
	else
	{
		if (node->parent->left)
			return (node->parent->left);
		return (NULL);
	}
}
