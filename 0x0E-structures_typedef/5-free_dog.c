#include<stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the allocated memory for struct
 * @d: struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
