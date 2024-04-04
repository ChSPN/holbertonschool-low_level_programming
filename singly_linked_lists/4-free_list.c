#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
