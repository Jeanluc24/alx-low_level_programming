#include<stdio.h>
#include "main.h"

/**
 * _pow - A function to calculate the base power
 * @base: The base of the number
 * @power: The power of the number
 * Return: The value of base power
 */
	unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result;
	unsigned int index;

	result = 1;
	for (index = 1; index <= power; index++)
		result *= base;
	return (result);
}

/**
 * print_binary - Printing a number in binary form
 * @n: A number to print out
 * Return: void
 */
	void print_binary(unsigned long int n)
	{
	unsigned long int mask, check;
	char a;

	a = 0;
	mask = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (mask != 0)
	{
		check = n & mask;
		if (check == mask)
		{
			a = 1;
			_putchar('1');
		}
		else if (a == 1 || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
