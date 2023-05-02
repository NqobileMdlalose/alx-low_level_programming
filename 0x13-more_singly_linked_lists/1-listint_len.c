#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head pointer
 * Return: num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *p;

	if (h == NULL)
	{
		num = 0;
	}
	p = h;
	while (p != NULL)
	{
		num++;
		p = p->next;
	}
	return (num);
}
