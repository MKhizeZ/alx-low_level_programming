#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes members of the dog struct
 * @d: member struct pointer
 * @name: Name member
 * @age: Age member
 * @owner: Owner member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
