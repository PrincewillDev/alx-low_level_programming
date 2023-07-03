#include "lists.h"
/**
 * print_list - this function prints the values of the list
 * @h: pointer arg
 * Return: t
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		t++;
	}

	return (t);
}
