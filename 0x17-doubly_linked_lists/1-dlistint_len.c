#include "lists.h"
/**
 * dlistint_len - Return the amount of element in list
 * @h: pointer to head
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	int size = 0;

	temp = h;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	return (size);
}
