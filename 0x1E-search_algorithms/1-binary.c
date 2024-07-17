#include "search_algos.h"

/**
 * binary_search - To search for a value in a sorted array of integers.
 * @array: is a pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The index where value is located
**/

int binary_search(int *array, size_t size, int value)
{
	size_t i, min, max;

	if (!array)
		return (-1);

	for (min = 0, max = size - 1; max >= min;)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = min + (max - min) / 2;
		if (array[i] == value)
			return (i);

		if (array[i] > value)
			max = i - 1;
		else
			min = i + 1;
	}

	return (-1);
}
