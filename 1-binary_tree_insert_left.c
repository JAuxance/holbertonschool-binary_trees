#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	/* new node*/
	binary_tree_t *newchildleft;
	binary_tree_t *oldleft;

	if (parent == NULL)
		return (NULL);

	newchildleft = malloc(sizeof(binary_tree_t));

	if (newchildleft == NULL)
		return (NULL);

	/* init new node */
	newchildleft->n = value;
	newchildleft->left = NULL;
	newchildleft->right = NULL;

	/* if parent left already existe*/
	if (parent->left)
	{
		oldleft = parent->left;
		newchildleft->left = oldleft;
		oldleft->parent = newchildleft;
	}
	else
		newchildleft->left = NULL;

	/* final update */
	parent->left = newchildleft;
	newchildleft->parent = parent;
	return (newchildleft);
}
