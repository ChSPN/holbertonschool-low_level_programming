#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - function that allocates memory using malloc
* Description: function that allocates memory using malloc
* @b: size of pointer
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
    void *pointer = NULL;

    pointer = malloc(b);
    if (pointer == NULL)
    {
        exit(98);
    }
    
    return pointer;
}
