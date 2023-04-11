#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - duplicates a sting
 * @str: sting to be duplicated
 * Return: str
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);


}
