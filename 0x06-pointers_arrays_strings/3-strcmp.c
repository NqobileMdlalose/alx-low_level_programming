#include "main.h"

/**
 * _strcmp - compares 2 stings
 * @s1: sring 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, neg;

	i = 0;
	j = 0;
	neg = i - j;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i > j || i != j)
	{
		return (neg);
	}
	else if (i < j || i != j)
	{
		return (neg);
	}
	else
	{
	return (0);
	}
}
