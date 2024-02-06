#include "lists.h"

/**
 * free_listint - func frees linked list from memory
 * @head: list head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
