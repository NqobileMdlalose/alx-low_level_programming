#include "main.h"

/**
 * _strpbrk - searches a sting for a set of bytes
 * @s: string 1
 * @accept: string 2
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
