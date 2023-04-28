#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints the elements in list_t
 * @h: head
 * Return: elements
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}

