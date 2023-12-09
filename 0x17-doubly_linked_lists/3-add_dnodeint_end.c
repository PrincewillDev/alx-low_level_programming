#include "lists.h"

/**
 * add_dnodeint_end - add node to the end of the list
 * @head: pointer to head node
 * @n: n data in the node
 * Return: address to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		newnode->prev = NULL;
		newnode->next = NULL;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	newnode->prev = temp;
	temp->next = newnode;

	return (newnode);
}
