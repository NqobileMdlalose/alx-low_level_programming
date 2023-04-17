#include "dog.h"

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
	int i;

	i = 0; 
	while (name[i] != '\0')
	{
		i++;
	}
	d->name = name;
	d->age = age;
	i = 0;
	while (owner[i] != '\0')
	{
		i++;
	}
	d->owner = owner;
}
