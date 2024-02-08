#include<stdio.h>
#include "main.h"

/**
 * get_endianness -Checking the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value;
	char *byte_ptr;

	value = 1;
	byte_ptr = (char *)&value;
	return (*byte_ptr);
}
