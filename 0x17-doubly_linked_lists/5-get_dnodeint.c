#include "lists.h"

/**
 * get_dnodeint_at_index - get node at nth location in list
 * @head: The head node
 * @index: index of node
 * Return: 0 on success
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (0);
}
