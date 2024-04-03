#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return.
 * Return: Pointer to the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *current = head;

    for (i = 0; current != NULL && i < index; i++)
    {
        current = current->next;
    }

    return current;
}