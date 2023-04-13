#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len1 = 0, i = 0, j = 0, k;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i++] != '\0')
	{
		len++;
	}
	while (s2[j++] != '\0')
	{
		len1++;
	}
	if (n >= len1)
	{
		n = len1;
	}
	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < len; k++)
	{
		ptr[k] = s1[k];
	}
	for (k = 0; k < n; k++)
	{
		ptr[len + k] = s2[k];
	}
	ptr[len + n] = '\0';
	return (ptr);
}
