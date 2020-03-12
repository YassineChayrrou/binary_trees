#include "binary_trees.h"
size_t binary_max(const binary_tree_t *tree)
{
	size_t left_child, right_child, H = 1;	

	if (tree == NULL)
		return (0);
	left_child = binary_max(tree->left);
	right_child = binary_max(tree->right);
	if (left_child > right_child)
		H = H + left_child;
	else
		H = H + right_child;
	return H;
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
	return holb - 1;
}
