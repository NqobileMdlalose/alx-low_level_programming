#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @a: charactor pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i = 0, j = 0;

	while (a[j] != '\0' && a[i] != '\0')
	{
		if (a[j] >= 97 && a[j] <= 122)
		{
			a[i] = a[j] - 32;
		}
		j++;
		i++;
	}
	return (a);
}
