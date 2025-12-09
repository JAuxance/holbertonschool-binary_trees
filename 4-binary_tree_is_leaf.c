#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (NULL);

	/* if it's a leaf*/
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* return sum of NULL node*/
	return (binary_tree_is_leaf(node->left) + binary_tree_is_leaf(node->right));
}
