#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a sting
 * @str: sting to be duplicated
 * Return: str
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(sizeof(char) * 10);

	if (*str == '\0')
	{
		return ('\0');
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	if (*ptr == '\0')
	{
		return ('\0');
	}
	return (ptr);


}
