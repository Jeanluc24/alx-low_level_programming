#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the list
 * Return: the number if nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
