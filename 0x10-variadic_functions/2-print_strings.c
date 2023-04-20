#include  "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *ptr;
	unsigned int j;

	va_start(ap, n);
	for  (j = 0; j < n; j++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
			if (separator != NULL && j < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
