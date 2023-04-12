#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * @ac: - argument count
 * @av: argument vector
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j = 0, len = 0, len2;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1; /* 1 for a new line*/
	}
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len2 = strlen(av[i]);
		memcpy(ptr + j, av[i], len2); /* copy argument results*/
		j += len2;
		ptr[j] = '\n';
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
