/**
 * @details
 * Write a function that inserts a node as the left-child of another nod
 *      Prototype:
 *      binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
 *
 *      Where parent is a pointer to the node to insert the left-child in
 *      And value is the value to store in the new node.
 *
 *      Your function must return a pointer to the created node,
 *      or NULL on failure or if parent is NULL.
 *
 *      If parent already has a left-child, the new node must take its place,
 *      and the old left-child must be set as the left-child of the new node.
 */

#include "binary_trees.h"

/**
 * @brief
 *
 * @param parent : node to add a left child to
 * @param value : value of the node
 * @return binary_tree_t* : pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return NULL;

    new_node = binary_tree_node(parent, value);

    if (!new_node)
        return NULL;

    if (parent->left) {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);
}