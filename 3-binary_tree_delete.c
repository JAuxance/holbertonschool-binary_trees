#include "binary_trees.h"
/**
 * binary_tree_delete - delete node tree
 *
 * tree - tree of node
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *temptree = tree;

	if (!tree)
		return;

	if (temptree->left)
	{
		binary_tree_delete(&temptree->left);
	}

	if (temptree->right)
	{
		binary_tree_delete(&temptree->right);
	}

	free(tree);

	tree = NULL;
}
