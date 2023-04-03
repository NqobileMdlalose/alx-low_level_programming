#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: string 1
 * @accept: string 2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] && accept[j]; i++)
	{
		if (s[i] != accept[j])
		{
			break;
		}
		count++;
	}
	return (count);
}
