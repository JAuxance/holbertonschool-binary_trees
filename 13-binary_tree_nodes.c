#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t onechildl;
	size_t onechildr;
	size_t current;

	if (!tree)
		return (0);

	onechildl = binary_tree_nodes(tree->left);
	onechildr = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		current = 1;
	else
		current = 0;
	return (onechildl + onechildr + current);
}
