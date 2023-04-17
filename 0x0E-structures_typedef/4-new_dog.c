#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(ptr));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		free(owner);
		free(ptr);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(name);
		free(ptr);
		return (NULL);
	}
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
