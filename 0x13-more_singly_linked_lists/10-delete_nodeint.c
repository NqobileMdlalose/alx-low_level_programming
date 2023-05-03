#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head pointer
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t **current, *temp;
	unsigned int i;

	current = head;
	for (i = 0; *current != NULL; i++)
	{
		if (i == index)
		{
			temp = *current;
			*current = (*current)->next;
			free(temp);
			return (1);
		}
		current = &(*current)->next;
	}
	return (-1);
}
