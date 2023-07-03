#include "lists.h"
/**
 * print_list - this function prints the values of the list
 * @h: pointer arg
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		t++;
	}
	return (t);
}
