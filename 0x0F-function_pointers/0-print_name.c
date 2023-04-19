#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - points to a function that prints a name
 * @name: arg1
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (name == NULL)
		name = NULL;
}
