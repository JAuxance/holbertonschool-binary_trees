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
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size;
	int height;
	int expected_size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	expected_size = (1 << (height + 1)) - 1;
	size = binary_tree_size(tree);

	return (expected_size == size);
}
