#include<stdio.h>
#include "lists.h"

/**
 * sum_listint - Calculating the sum of all the data in a list
 * @head: first node in the linked list
 * Return: sum
 */
	int sum_listint(listint_t *head)
	{
		int sum = 0;
	listint_t *current = head;

	while (current)
	{
	sum += current->n;
	current = current->next;
	}

	return (sum);
	}
