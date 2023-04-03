#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: string 2
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		i++;
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
		j++;
	}
	if (haystack[i] == needle[j])
	{
		return (needle);
	}
	return ('\0');
}
