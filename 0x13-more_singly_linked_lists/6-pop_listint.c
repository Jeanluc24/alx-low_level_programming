#include<stdio.h>
#include "lists.h"

/**
 * pop_listint - Deleting the head node of a linked list
 * @head: The pointer to the first element in the linked list
 * Return: the head node's data (n), or 0 if the list is empty.
 */
	int pop_listint(listint_t **head)
	{
	listint_t *temp;
	int data;

	if (!head || !*head)
	return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
	}
