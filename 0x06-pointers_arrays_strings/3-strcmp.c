#include "main.h"

/**
 * _strcmp - compares 2 stings
 * @s1: sring 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, pos, neg;
	int len1 = 0, len2 = 0;

	i = 0;
	j = 0;
	pos = 15;
	neg = -15;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	if (len1 > len2)
	{
		return (pos);
	}
	if (len1 < len2)
	{
		return (neg);
	}
	else
	{
	return (0);
	}
}
