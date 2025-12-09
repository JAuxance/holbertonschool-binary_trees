#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int treeheight = 0;

	/*sum of branch left + sum of branch right*/
	treeheight = binary_tree_height(tree->left) + binary_tree_height(tree->right);

	/*return the height*/
	return (treeheight);
}
