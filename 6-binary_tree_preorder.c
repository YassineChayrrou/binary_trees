#include "binary_trees.h"
/**
  *binary_tree_preorder - preorderly traverse a binary tree structure
  *@tree: pointer to root node of binary tree
  *@func: pointer to function that prints node data
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
