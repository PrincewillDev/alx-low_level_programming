#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head pointer to the first node
 * @n: node value
 * Return: address to new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (0);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (*head);
}
