#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the list
 * @head: head pointer
 * @index: int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int num = 0;

	current = head;
	while (current != NULL)
	{
		if (num == index)
		{
			return (current);
		}
		current = current->next;
		num++;
	}
	return (NULL);
}
