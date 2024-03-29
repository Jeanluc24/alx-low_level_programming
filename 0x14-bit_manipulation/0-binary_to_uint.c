#include<stdio.h>
#include "main.h"

/**
 * binary_to_uint - The function to convert a binary number to an unsigned int.
 * @b: A pointer to a string with a binary number
 * Return: unsigned integer with decimal value
 */
	unsigned int binary_to_uint(const char *b)
	{
	int index;
	unsigned int result;

	result = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		result <<= 1;
		if (b[index] == '1')
			result += 1;
	}
	return (result);
}
