#include "search_algos.h"

/**
 * interpolation_search - Searching for a value in a sorted array of integers,
 * using the Interpolation search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: First index where value is located
**/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, j, m;

	if (array == NULL)
		return (-1);

	for (j = 0, m = size - 1; m >= j;)
	{
		i = j + (((double)(m - j) / (array[m] - array[j])) * (value - array[j]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			m = i - 1;
		else
			j = i + 1;
	}

	return (-1);
}
