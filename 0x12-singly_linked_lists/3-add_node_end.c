#include "lists.h"

/**
 * add_node_end - adds a node to the end of the list.
 * @head:pointer
 * @str: pointer
 * Return: address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *h = *head;

	node = malloc(sizeof(list_t));
	if (node == NULL || head == NULL)
		return (NULL);


	if (str != NULL)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		node->len = strlen(str);
	}

	if (h != NULL)
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = node;
	}
	else
		*head = node;
	return (node);
}
