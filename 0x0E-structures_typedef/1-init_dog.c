#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a var type
 * @d: member 1
 * @name: member 2
 * @age: member 3
 * @owner: member 4
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int j;

	for (j = 0; name[j] < '\0'; j++)
	{
		d->name = name;
	}
	d->age = age;
	for (j = 0; owner[j] < '\0'; j++)
	{
		d->owner = owner;
	}
}
