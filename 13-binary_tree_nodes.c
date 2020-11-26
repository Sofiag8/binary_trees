#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes of at least 1 child
 * @tree: pointer to the root node of the tree to count
 * Return: if NULL return 0; otherwise tha amount
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		return (left + right + 1);
	}
	return (0);
}
