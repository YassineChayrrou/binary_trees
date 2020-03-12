#include "binary_trees.h"
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
