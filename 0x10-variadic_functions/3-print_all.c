#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything
 * @format: argument
 * Return
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	double f;
	char *s;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
