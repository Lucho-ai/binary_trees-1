#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - Funtion that check if the node is a root
 * @node: Node of the binary tree.
 * Return: Return 1 if is root, if is not a root 0, is node is null 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
