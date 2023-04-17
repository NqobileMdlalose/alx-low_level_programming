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
	struct dog
	{
		char name[20];
		float age;
		char owner[20];
	};
	int i;

	for (i = 0; name[i] != '\0'; i++)
	{
		d->name = name;
	}
	d->age = age;
	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner = owner;
	}
}
