#include "main.h"

/**
 * *_strcpy - copies the string pinted to by src
 * @dest: charactor variable
 * @src: charactor varible
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}


