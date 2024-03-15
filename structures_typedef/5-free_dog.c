#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free dog
 * Description: free dog
 * @d: the dog
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}

		if (d->owner != NULL)
		{
			free(d->owner);
		}

		free(d);
	}
}
