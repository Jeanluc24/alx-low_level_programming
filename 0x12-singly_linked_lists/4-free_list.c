#include <stdlib.h>
#include "lists.h"

/**
* free_list - To free a linked list
* @head: list_t that is list to be freed
*/
	void free_list(list_t *head)
	{
	list_t *last_node;

	while (head)
	{
	last_node = head->next;
	free(head->str);
	free(head);
	head = last_node;
	}
	}
