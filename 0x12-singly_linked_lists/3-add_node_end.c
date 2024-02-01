#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - Adding a new node at the end of a linked list
* @head: Doubling pointer to the list_t list
* @str: String to put in the new node
* Return: Address of the new element, or NULL if it failed
*/
	list_t *add_node_end(list_t **head, const char *str)
	{
		list_t *new_node, *last_node;
	unsigned int length = 0;

	while (str[length])
	length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	return (NULL);

	new_node->str = strdup(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	while (last_node->next)
	last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
	}
