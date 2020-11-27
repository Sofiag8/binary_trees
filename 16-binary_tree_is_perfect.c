#include "binary_trees.h"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 0 if null, otherwise or not perfect, 1 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	/* if the right & and left nodes have not child, is perfect :P */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* if theres a subtree more longer or shorter is not perfect */
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		return (left && right);
	}
	return (0);
}
