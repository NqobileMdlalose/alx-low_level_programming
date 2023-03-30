#include "main.h"

/**
 * string_toupper - changes lower case to upper case
 * @* - charactor pointer
 * Return: char
 */
char *string_toupper(char *)
{
	char i = 'a';

	if (i >= 'a' && i <= 'z')
	{
		*i = *i - 32;
	}
	return (i);
}
