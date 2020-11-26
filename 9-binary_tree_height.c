#include "binary_trees.h"
/**
 * binary_tree_height - measures the hegiht of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * Return: 0 if Null, otherwise the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l, height = 0;

	if (tree == NULL)
		return (0);
	r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	height += (r > l ? r : l);
	return (height);
}
