#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sizeleft = binary_tree_height(tree->left);
	size_t sizeright = binary_tree_height(tree->right);

	if (!tree)
		return (0);
	if (sizeleft > sizeright)
		return (sizeleft + 1);
	else
		return (sizeright + 1);
}
