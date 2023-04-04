#include "main.h"

/**
 * _strspn - gets the length of a prefix substing
 * @s: string 1
 * @accept: string 2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int count = 0;
	
	i = 0;
	while (*s) 
	{
		while (accept[i] != '\0')
		{
			if (s[i] != accept[i])
			{
				break;
			}
			i++;
		}
		i++;
		count++;
	}
	return (count);
}
