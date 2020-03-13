size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_child, right_child;

	if (tree == NULL)
		return (0);
	left_child = binary_tree_size(tree->left);
	right_child = binary_tree_size(tree->right);
	return (left_child + 1 + right_child);
}

size_t binary_max(const binary_tree_t *tree)
{
	size_t left_child, right_child, H;

	if (tree == NULL)
		return (0);
	left_child = binary_max(tree->left);
	right_child = binary_max(tree->right);
	if (left_child > right_child)
		H = 1 + left_child;
	else
		H = 1 + right_child;
	return (H);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t holb;

	holb = binary_max(tree);
	if (holb == 0)
		return (0);
	return (holb - 1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if ((pow(2, binary_tree_height(tree)+1)-1) == binary_tree_size(tree))
    return(1);
    return(0);
}
