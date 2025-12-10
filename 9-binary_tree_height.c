#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sizeleft;
	size_t sizeright;

	if (!tree)
		return (0);

	sizeleft = binary_tree_height(tree->left);
	sizeright = binary_tree_height(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	if (sizeleft > sizeright)
		return (sizeleft + 1);

	return (sizeright + 1);
}
