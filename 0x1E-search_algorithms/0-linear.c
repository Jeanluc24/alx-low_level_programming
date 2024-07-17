#include "search_algos.h"

/**
 * linear_search - Func searches for value in int
 * array using Linear search algorithm
 *
 * @array: Input int array
 * @size: Array size
 * @value: Search value
 *
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int q;

	if (array == NULL)
	{
		return (-1);
	}

	for (q = 0; q < (int)size; q++)
	{
		printf("Value checked array[%u] = [%d]\n", q, array[q]);
		if (value == array[q])
		{
			return (q);
		}
	}
	return (-1);
}
