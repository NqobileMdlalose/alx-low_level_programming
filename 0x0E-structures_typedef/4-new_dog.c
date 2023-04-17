#include "dog.h"
#include <stdlib.h>

/**
 * str_dup - duplicates a sting
 * @str: arg 1
 * Return: char
 */
char* str_dup(char *str)
{
	int len = 0, i;
	char *newstr;

	while (str[len] != '\0')
	{
		len++;
	}
	newstr = malloc((len + 1) * sizeof(char));
	for (i = 0; i <- len; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
/**
 * new_dog - creates a new dog
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *namecpy, *ownercpy;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	namecpy = str_dup(name);
	if (namecpy == NULL)
	{
		free(newdog);
		return (NULL);
	}
	ownercpy = str_dup(owner);
	if (ownercpy == NULL)
	{
		free(namecpy);
		free(newdog);
		return (NULL);
	}
	newdog->name = namecpy;
	newdog->age = age;
	newdog->owner = ownercpy;
	return (newdog);
}
