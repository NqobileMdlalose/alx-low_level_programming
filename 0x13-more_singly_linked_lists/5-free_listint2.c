#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees the list and sets the head node to NULL
 * @head: head pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
	{
		return;
	}
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
