/**
 * @details
 * Write a function that creates a binary tree node
 * Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
 * Where parent is a pointer to the parent node of the node to create
 * And value is the value to put in the new node
 * When created, a node does not have any child
 * Your function must return a pointer to the new node, or NULL on failure
 */

#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 *
 * @param parent : parent of the node
 * @param value : value of the node
 * @return binary_tree_t* : the node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));

    if (!new_node)
        return NULL;

    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->n = value;
    
    return (new_node);
}