#include "dog.h"
#include <string.h>
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
