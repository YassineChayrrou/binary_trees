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
  *binary_tree_balance - measures the balance factor of a binary tree structure
  *@tree: pointer to node of Binary Tree structure
  *Return: balance factor value
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);
	lh = binary_max(tree->left);
	rh = binary_max(tree->right);
	return (lh - rh);
}
