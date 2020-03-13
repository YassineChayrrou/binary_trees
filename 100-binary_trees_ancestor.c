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
/**
  *binary_trees_ancestor - finds lowest common ancestor of 2 BT nodes
  *@first: pointer to binary tree node
  *@second: pointer to binary tree node
  *Return: pointer to Lowest Common Ancestor or NULL
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t fd, sd;
	binary_tree_t *node;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	while ((fd = binary_tree_depth(first)) != (sd = binary_tree_depth(second)))
	{
		if (fd > sd)
		{
			first = first->parent;
			if (!first)
				return (NULL);
		}
		if (fd < sd)
		{
			second = second->parent;
			if (!second)
				return (NULL);
		}
	}
	while (first && second)
	{
		if (first == second)
		{
			return ((binary_tree_t *)first);
		}
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
