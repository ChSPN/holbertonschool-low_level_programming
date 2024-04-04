#include <stddef.h>
#include <unistd.h>
#include <string.h> /*Pour strlen*/
#include <stdlib.h> /*Pour malloc, free et strdup*/
#include <stdio.h> /* Pour printf */
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Description: singly linked list node structure
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);
}
