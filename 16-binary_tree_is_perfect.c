#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
  *power - power
  *@base: base
  *@exponent: exponent
  *Return: power
  */
unsigned int power(int base, int exponent)
{
int result = 1;

for (; exponent > 0; exponent--)
result = result *base;
return (result);
}

/**
  *binary_tree_size - measures the size
  *@tree: pointer to node to measure size from
  *Return: size of Binary tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_child, right_child;

	if (tree == NULL)
	return (0);
	left_child = binary_tree_size(tree->left);
	right_child = binary_tree_size(tree->right);
	return (left_child + 1 + right_child);
}

/**
  *binary_max - measures node count in longest path from root to leaf
  *@tree: pointer to root node of binary tree structure
  *Return: H or 0
  */
size_t binary_max(const binary_tree_t *tree)
{
	size_t left_child, right_child, H;

	if (tree == NULL)
		return (0);
	left_child = binary_max(tree->left);
	right_child = binary_max(tree->right);
	if (left_child > right_child)
		H = 1 + left_child;
	else
		H = 1 + right_child;
	return (H);
}
/**
  *binary_tree_height - measures the height of Binary tree from node
  *@tree: pointer to root node of binary tree structure
  *Return: height of binary tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t holb;

	holb = binary_max(tree);
	if (holb == 0)
		return (0);
	return (holb - 1);
}
/**
  *binary_tree_is_perfect - check if tree is perfect or not
  *@tree: pointer to root node of binary tree structure
  *Return: 1 if perfect 0 other case
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if ((power(2, binary_tree_height(tree) + 1) - 1) == binary_tree_size(tree))
return (1);
return (0);
}
