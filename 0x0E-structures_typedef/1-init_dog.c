#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: array
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Define a new type struct dog with the
 * following elements:
 * name, type = char *
 * age, type = float
 * owner, type = char *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
