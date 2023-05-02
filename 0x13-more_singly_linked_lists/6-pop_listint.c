#include "lists.h"
#include <stdlib.h>

/**
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	p = *head;
	n = p->n;
	*head = p->next;
	free(p);
	return (n);
}
