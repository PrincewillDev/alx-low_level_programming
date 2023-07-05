#include "lists.h"
/**
 * print_listint - Prints out the element of a list.
 * @h: Head pointer to the list
 * Return: The element of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		return (0);
	}


	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	return (i);

}
