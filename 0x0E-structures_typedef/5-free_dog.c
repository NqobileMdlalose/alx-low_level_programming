#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dog
 * @d: member
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name)
	{
		free(d->name);
	}
	if (d->owner)
	{
		free(d->owner);
	}
	free(d);
}
