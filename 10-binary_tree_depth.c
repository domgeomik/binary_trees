#include "binary_trees.h"
/**
 * binary_tree_depth - Depth of Specified Node from Root
 * @tree: node to Check the Depth
 * Return: 0 is it is the Root or Number of Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
