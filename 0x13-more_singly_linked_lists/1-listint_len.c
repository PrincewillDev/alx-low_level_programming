#include "lists.h"

/**
 * listint_len - count the length of the element in list
 * @h: head pointer
 * Return: returns the length of count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		if (h->n)
		{
			h = h->next;
		}
		count++;
	}

	return (count);
}
