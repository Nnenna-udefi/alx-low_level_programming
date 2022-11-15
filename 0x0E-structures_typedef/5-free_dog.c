#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_d - function that frees dog
 * @d: struct dog
 */
void free_d(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
