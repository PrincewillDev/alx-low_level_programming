#include "lists.h"

/**
 * sum_dlistint - adds up n in all nodes
 * @head: head pointer
 * Return: 0 on empty list and sum on success
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0, n;

	if (head == NULL)
	{
		return (0);
	}

	temp = head;

	while (temp != NULL)
	{
		n = temp->n;
		temp = temp->next;
		sum = sum + n;
	}

	return (sum);
}
