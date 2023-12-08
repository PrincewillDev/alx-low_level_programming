#include "lists.h"

/**
 * print_dlistint - Print the items in the list
 * @h: pointer to the head node
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	int size = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		size++;
	}

	return (size);
}
