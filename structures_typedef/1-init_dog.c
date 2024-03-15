#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function init_dog
 * Description: init_dog
 * @d: the dog
 * @name: name
 * @age: age
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	(*d).age = age;
	d->owner = owner;
}
