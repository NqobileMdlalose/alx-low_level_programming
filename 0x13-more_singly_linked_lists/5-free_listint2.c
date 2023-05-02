#include "lists.h"
#include <stdlib.h>
/**
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
