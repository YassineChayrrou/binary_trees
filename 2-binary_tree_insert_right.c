#include "binary_trees.h"
/**
  *binary_tree_insert_right - inserts newNode as right-child of its parent
  *@parent: pointer to binary tree parent node
  *@value: value to be stored in a binary tree newNode
  *return: pointer to newNode or NULL if failed
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	if (parent->right == NULL)
	{
		parent->right = newNode;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->left = NULL;
	}
	return (newNode);
}
