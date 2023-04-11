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

	if (*str == '\0')
	{
		return ('\0');
	}
	ptr = malloc(sizeof(strlen(str)));
	if (*ptr == '\0')
	{
		return ('\0');
	}
	strcpy(ptr, str);
	return (ptr);


}
