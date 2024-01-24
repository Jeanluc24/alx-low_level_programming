#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints its own codes
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, f;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (f = 0; f < bytes; f++)
	{
		if (f == bytes - 1)
		{
			printf("%02hhx\n", arr[f]);
			break;
		}
		printf("%02hhx ", arr[f]);
	}
	return (0);
}
