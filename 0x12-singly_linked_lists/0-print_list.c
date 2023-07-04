#include "lists.h"
/**
 * print_list - this function prints the values of the list
 * @h: pointer arg
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		printf("[%ld] %s\n", h->str ? strlen(h->str) : 0, h->str ? h->str : "(nil)");
		h = h->next;
		t++;
	}

	return (t);
}
