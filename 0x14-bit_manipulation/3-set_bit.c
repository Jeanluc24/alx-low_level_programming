#include "main.h"

/**
 * set_bit - func sets specific index bit n to 1
 * @n: input int pointer
 * @index: index to set
 * Return: index set (1), error (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}
	k = 1;
	*n = *n | (k << index);

	return (1);
}
