#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head pointer
 * @n: data argument
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->next = *head;
	newnode->prev = NULL;
	newnode->n = n;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;

	return (newnode);
}
