/**
 * @details
 * Write a function that inserts a node as the right-child of another node
 *      Prototype:
 *      binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
 *
 *      Where parent is a pointer to the node to insert the right-child in
 *      And value is the value to store in the new node
 *
 *      Your function must return a pointer to the created node,
 *      or NULL on failure or if parent is NULL.
 *
 *      If parent already has a right-child, the new node must take its place,
 *      and the old right-child must be set as the right-child of the new node.
 */

#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return NULL;
    
    new_node = binary_tree_node(parent, value);

    if (!new_node)
        return NULL;

    if (parent->right)
    {
        new_node->right = parent->right;
        parent->right->parent = new_node;
    }

    parent->right = new_node;

    return (new_node);
}