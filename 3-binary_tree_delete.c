#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temptree = tree;

	if (!tree)
		return;

	if (temptree->left)
	{
		binary_tree_delete(temptree->left);
	}

	if (temptree->right)
	{
		binary_tree_delete(temptree->right);
	}

	free(tree);

	tree = NULL;
}
