#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t childl;
	size_t childr;
	size_t size;

	if (!tree)
		return (0);

	childl = binary_tree_size(tree->left);
	childr = binary_tree_size(tree->right);
	size = childl + childr + 1;

	return (size);
}
