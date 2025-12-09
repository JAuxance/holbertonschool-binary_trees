#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;

	if (!func)
		return;

	/* Start the recursion */
	binary_tree_inorder(tree->left, func);

	/* start "print" function*/
	func(tree->n);

	/* Start the recursion */
	binary_tree_inorder(tree->right, func);
}
