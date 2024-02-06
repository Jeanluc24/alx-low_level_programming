#include<stdio.h>
#include "lists.h"

/**
 * reverse_listint - To reverse a linked list
 * @head: A pointer to the first node
 * Return: The pointer to the first node in the new list
 */
	listint_t *reverse_listint(listint_t **head)
	{
	listint_t *i = NULL;
	listint_t *j = NULL;

	while (*head)
	{
	j = (*head)->j;
	(*head)->b = i;
	i = *head;
	*head = j;
	}

	*head = i;

	return (*head);
	}
