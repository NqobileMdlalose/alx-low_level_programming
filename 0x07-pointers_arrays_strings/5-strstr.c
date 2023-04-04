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
	char *p = needle;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; p[j] != '\0'; j++)
		{
			if (haystack[i] == p[j])
			{
				return (p);
			}
		}
	}
	return ('\0');
}
