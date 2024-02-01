#include "lists.h"

/**
 * add_node_end - func returns new elems (new node) to list_t list
 * @head: first link_t elems
 * @str: node data string
 * Return: address of new elem (Success), fails (NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *string;
	list_t *last_node;

	last_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (str == NULL)
	{
		return (NULL);
	}

	string = strdup(str);
	if (string == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->str = string;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
