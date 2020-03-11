#include "binary_trees.h"
/**
  *binary_tree_inorder - inorderly traverses a binary tree structure
  *@tree: pointer to root node of binary tree
  *@func: pointer to function that prints node data
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
