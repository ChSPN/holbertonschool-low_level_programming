#include "lists.h"
#include <stddef.h>
#include <unistd.h>
#include <string.h> /*Pour strlen*/
#include <stdlib.h> /*Pour malloc, free et strdup*/

/**
* print_list - Prints all the elements of a list_t list.
* @h: A pointer to the head of the list.
*
* Description: singly linked list node structure
* Return : number of nodes
*/
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
       if (h->str == NULL)
            write(1, "[0] (nil)", 10);
        else
            write(1, h->str, h->len);
        h = h->next;
        count++;
        if (h != NULL)
            write(1, ", ", 2);
    }
    write(1, "\n", 1);
    return (count);
}

