#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints the elements of the list
 * @h: head pointer
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	const listint_t *p;

	p = h;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		num++;
	}
	return (num);

}
