#include "lists.h"
/**
 * print_listint - Prints out the element of a list.
 * @h: Head pointer to the list
 * Return: The element of the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	const listint_t *ptr;


	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{	i++;
		printf("%d \n", ptr->n);
		ptr = ptr->next;
	}
	return (i);

}
