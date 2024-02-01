#ifndef LINKED
#define LINKED

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked lists
 * @str: string - String for malloc'ed
 * @len: The length of the string
 * @next: The points for the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
