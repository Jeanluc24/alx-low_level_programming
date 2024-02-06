#include "lists.h"

/**
 * add_nodeint_end - func prints new node at end of linked list
 * @head: list head
 * @n: n elem
 * Return: new elem address (Success), fail (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element;
	listint_t *last_node;

	(void)temp;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = NULL;
	last_node = *head;

	if (*head == NULL)
		*head = new_element;
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_element;
	}

	return (*head);
}
