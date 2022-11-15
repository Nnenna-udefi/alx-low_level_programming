#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initilializes a
 * variable struct dog
 * @d: struct dog
 * @name: integer for name
 * @age: age integer
 * @owner: owner integer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
