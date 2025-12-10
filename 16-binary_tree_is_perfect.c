#include "binary_trees.h"
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
	expected_size = (1 << height) - 1;
	size = binary_tree_size(tree);

	return (expected_size == size);
}
