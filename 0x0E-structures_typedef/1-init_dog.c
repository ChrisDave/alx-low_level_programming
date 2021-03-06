#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes variable of type struct dog
 * @d: Dog to be initialized
 * @name: The name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
