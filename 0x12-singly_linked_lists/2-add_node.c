#include "lists.h"

/**
 * add_node - adds a new node
 * @head: pointer
 * @str: pointer
 * Return: the address or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

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

	node->next = *head;
	*head = node;

	return (node);

}
