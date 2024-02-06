#include "lists.h"

/**
 * reverse_listint - func prints reversed linked list
 * @head: list head
 * Return: first node address pointer (SUccess), fail (NULL)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}

	*head = j;
	return (*head);
}

