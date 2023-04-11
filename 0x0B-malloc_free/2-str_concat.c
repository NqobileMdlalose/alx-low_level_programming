#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);

}
