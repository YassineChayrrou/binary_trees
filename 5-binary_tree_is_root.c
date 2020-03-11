#include "binary_trees.h"
/**
<<<<<<< HEAD
  *binary_tree_is_root - checks if node is root of binary tree
  *@node: pointer to node of a binary tree
  *Return: 1 if root of tree or 0 if not root
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
		return (1);
	else
		return (0);
=======
* binary_tree_is_root - checks if node is root
* @node: node
* Return: true if root and false if note
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
>>>>>>> 1f891af4700f226c2c2c574e069404e427ba11ae
}
