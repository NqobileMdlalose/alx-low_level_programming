#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free the space in memory for the list
 * @head: head pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
