#include "binary_trees.h"
/**
  *binary_tree_leaves - counts the number of leaves in a BinaryTree
  *@tree: pointer to node to count from number of leafs
  *Return: number of leafs
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_child, right_child;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_child = binary_tree_leaves(tree->left);
	right_child = binary_tree_leaves(tree->right);
	return (left_child + right_child);
}
