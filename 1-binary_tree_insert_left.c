#include "binary_trees.h"
/**
  *binary_tree_insert_left - inserts newNode as left-child of its parent
  *@parent: pointer to binary tree parent node
  *@value: value to be stored in a binary tree newNode
  *Return: pointer to newNode or NULL if failed
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->n = value;
	if (parent->left == NULL)
	{
		parent->left = newNode;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	else
	{
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
		newNode->right = NULL;
	}
	return (newNode);
}
