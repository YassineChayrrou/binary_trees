#include "binary_trees.h"
/**
  *binary_tree_postorder - postorderly traverses a binary tree structure
  *@tree: pointer to root node of binary tree
  *@func: pointer to function that prints node data
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
