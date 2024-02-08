#include "main.h"

/**
 * flip_bits - func prints - func prints bits to flip int inputs
 * @n: first input int
 * @m: second input int
 * Return: flipped number of bits (Success)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_op;
	unsigned int sum_bit;

	sum_bit = 0;
	xor_op = n ^ m;

	while (xor)
	{
		sum_bit += xor_op & 1;
		xor_op = xor_op >> 1;
	}
	return (sum_bit);
}
