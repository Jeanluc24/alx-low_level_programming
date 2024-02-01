#include "lists.h"

/**
 * print_list - Print elements of a list_t list.
 * @h: A pointer to the first node of the singly linked list.
 *
 * Return: Number of nodes in the list.
 *         If str is NULL, print [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);

		h = h->next;
		node_count++;
	}

	return (node_count);
}

