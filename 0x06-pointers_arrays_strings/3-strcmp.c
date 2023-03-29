#include "main.h"

/**
 * _strcmp - compares 2 stings
 * @s1: sring 1
 * @s2: string 2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i, com;
	
	i = 0;
	com = 15;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	if(s1[i] > s2[i])
	{
		return (com);
	}
	else if (s1[i] < s2[i])
	{
		return (com * -1);
	}
	else
	{
	return (0);
	}
}
