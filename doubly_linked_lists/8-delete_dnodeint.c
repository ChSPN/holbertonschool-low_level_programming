#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Pointer to a pointer to the head node.
 * @index: Index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp;
    unsigned int i;

    if (head == NULL || *head == NULL)
        return (-1);

    current = *head;

    if (index == 0)
    {
        *head = current->next;
        if (current->next != NULL)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    for (i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next->next;
    free(current->next);
    current->next = temp;
    if (temp != NULL)
        temp->prev = current;

    return (1);
}