#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current, *next_node, *prev_node;

    if (!head || !*head) /* Check if head is NULL */
        return (-1);

    current = *head;
    for (i = 0; current && i < index; i++) /* Move to the index you need */
        current = current->next;

    if (!current)
        return (-1);

    next_node = current->next;
    prev_node = current->prev;

    if (prev_node) /* If not the first node */
        prev_node->next = next_node;
    else /* If it's the first node, adjust head */
        *head = next_node;

    if (next_node) /* If not the last node */
        next_node->prev = prev_node;

    free(current); /* Free the current node */

    return (1);
}
