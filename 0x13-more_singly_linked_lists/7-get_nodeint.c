#include<stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the node at a certain index
 * @head: The first node in the linked list
 * @index: An index of the node to return
 * Return: The pointer to the node we're looking for, or NULL
 */
	listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
	{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
	current = current->next;
	count++;
	}

	return (current ? current : NULL);
	}
