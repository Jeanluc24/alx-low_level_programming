#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of list
 * Return: 0
 */
	void free_dlistint(dlistint_t *head)
{
	dlistint_t *head_tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((head_tmp = head) != NULL)
	{
		head = head->next;
		free(head_tmp);
	}
}
