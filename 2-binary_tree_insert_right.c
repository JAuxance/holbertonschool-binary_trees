#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* new node*/
	binary_tree_t *newchildright;
	binary_tree_t *oldright;

	if (parent == NULL)
		return (NULL);

	newchildright = malloc(sizeof(binary_tree_t));

	if (newchildright == NULL)
		return (NULL);

	/* init new node */
	newchildright->n = value;
	newchildright->left = NULL;
	newchildright->right = NULL;

	/* if parent right already existe*/
	if (parent->right)
	{
		oldright = parent->right;
		newchildright->right = oldright;
		oldright->parent = newchildright;
	}
	else
		newchildright->right = NULL;

	/* final update */
	parent->right = newchildright;
	newchildright->parent = parent;
	return (newchildright);
}
