#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: head pointer
 * @n: member
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	p = *head;
	if (*head != NULL)
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
	else
	{
		*head = new;
	}
	return (new);
}
