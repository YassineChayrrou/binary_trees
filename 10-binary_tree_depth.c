#include "binary_trees.h"
/**
  *binary_depth - measures depth of BT recursively
  *@tree: pointer to node to measure depth
  *Return: D
  */
size_t binary_depth(const binary_tree_t *tree)
{
	size_t D;

	if (tree == NULL)
		return (0);
	D = 1 + binary_depth(tree->parent);
	return (D);
}
/**
  *binary_tree_depth - measures the depth of a binary tree
  *@tree: pointer to node to measure the depth
  *Return: depth of binary tree
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = binary_depth(tree);
	if (depth == 0)
		return (0);
	return (depth - 1);
}
