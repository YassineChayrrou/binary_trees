#include "binary_trees.h"
/**
  *binary_tree_is_full - checks if BT is  full binary tree
  *@tree: pointer to node of binary tree data structure
  *Return: 1 if full BT or 0 if not full BT
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	else
		return (0);
}
