#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head
 * @idx: node index
 * @n: the data in node
 * Return: newnode on success and NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *ftemp, *stemp;
	unsigned int count = 0;

	if (*h == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	ftemp = *h;
	while (ftemp != NULL)
	{stemp = ftemp->next;
		if (stemp == NULL)
		{
			return (NULL);
		}
		if (count == idx - 1)
		{
			newnode->n = n;
			newnode->prev = ftemp;
			newnode->next = stemp;
			ftemp->next = newnode;
			stemp->prev = newnode;
			return (newnode);
		}
		ftemp = ftemp->next;
		count++;
	}
	if (idx > sizeof(dlistint_t))
	{
		return (NULL);
	}
	return (0);

}
