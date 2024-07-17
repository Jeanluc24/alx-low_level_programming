#include "search_algos.h"

/**
 * jump_search - Searching for a value in a sorted array of integers,
 * using the Jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: first index where value is located
**/

int jump_search(int *array, size_t size, int value)
{
	size_t i, first, last;

	if (!array || !size)
		return (-1);

	last = sqrt(size);
	for (i = first = 0; first < size && array[first] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", first, array[first]);
		i = first;
		first += last;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, first);

	first = first < size - 1 ? first : size - 1;
	for (; i < first && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
