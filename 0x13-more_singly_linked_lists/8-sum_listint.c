#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums up the data of the list
 * @head: head pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	if (current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
