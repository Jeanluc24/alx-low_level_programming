#include<stdio.h>
#include "main.h"

/**
 * flip_bits - Counting the number of bits to change
 * @n: The first number
 * @m: The second number
 * Return: The number of bits to change
 */
	unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	int xor_op, sum_bit = 0;
	unsigned long int result;
	unsigned long int index = n ^ m;

	for (xor_op = 63; xor_op >= 0; xor_op--)
	{
		result = index >> counter;
		if (result & 1)
			sum_bit++;
	}

	return (sum_bit);
}
