#include "binary_trees.h"
/**
<<<<<<< HEAD
  *binary_tree_is_leaf - checks if current node is a leaf
  *@node: node to check
  *Return: 1 if leaf or 0 if not a leaf
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
=======
* binary_tree_is_leaf - checks if a node is a leaf
* @node: node
* Return: 1 if it's leaf or 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
>>>>>>> 1f891af4700f226c2c2c574e069404e427ba11ae
}
