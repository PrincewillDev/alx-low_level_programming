#include "lists.h"
/**
 * list_len - list elements number
 * @h: pointer
 * Return: element size
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

	return (len);
}
