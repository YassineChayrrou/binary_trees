#include "binary_trees.h"
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
