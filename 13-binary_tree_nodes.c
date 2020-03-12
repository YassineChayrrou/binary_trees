#include "binary_trees.h"
/**
  *binary_tree_nodes - counts nodes with at least 1 child in a BT
  *@tree: pointer to node to count from in BT structure
  *Return: Count of Nodes with at least 1 child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_child, right_child;

	if (tree == NULL)
		return (0);
	else if (tree->left || tree->right)
	{
		left_child = binary_tree_nodes(tree->left);
		right_child = binary_tree_nodes(tree->right);
		return (1 + left_child + right_child);
	}
	else
		return (0);
}
