#include "binary_trees.h"
/**
  *binary_tree_uncle - checks if BT node has an uncle
  *@node: pointer to a node of Binary Tree structure
  *Return: pointer to uncle or NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left != node->parent)
		return (node->parent->parent->left);
	if (node->parent->parent->right != node->parent)
		return (node->parent->parent->right);
	return (NULL);
}
