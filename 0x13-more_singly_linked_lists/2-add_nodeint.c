#include "lists.h"

/**
 * add_nodeint - func adds new new init node in linked list
 * @head: list head
 * @n: n elem
 * Return: new elem address (Success), fail (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element;

	new_element = malloc(sizeof(listint_t));

	if (new_element == NULL)
	{
		return (NULL);
	}

	new_element->n = n;
	new_element->next = *head;
	*head = new_element;

	return (*head);
}
