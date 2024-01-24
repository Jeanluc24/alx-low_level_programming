#include<stdio.h>
#include "function_pointers.h"
/**
 * int_index - return the indexe's place if the comparison = true, else -1
 * @array: array to be used
 * @size: size of the elements in array
 * @cmp: pointer to function of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
