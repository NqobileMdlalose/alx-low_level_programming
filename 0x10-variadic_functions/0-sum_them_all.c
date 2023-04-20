#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds ints
 * @n: number of arguments
 *
 * Return: interger
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, som = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		som += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (som);


}
