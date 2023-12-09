#include "lists.h"

/**
 * free_dlistint - free the nodes in the list
 * @head: pointer to head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
	{
		return;
	}

	temp = head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
