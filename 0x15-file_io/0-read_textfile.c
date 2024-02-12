#include<stdio.h>
#include "main.h"

/**
 * read_textfile - Reading the text file and prints the letters
 * @filename: The filename.
 * @letters: The number of letters that are printed.
 *
 * Return: numbers of letters printed.
 */
	ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileIndex;
	ssize_t byte_rd, byte_wr;
	char *buffer;

	if (!filename)
		return (0);

	fileIndex = open(filename, O_RDONLY);

	if (fileIndex == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	byte_rd = read(fileIndex, buffer, letters);
	byte_wr = write(STDOUT_FILENO, buffer, byte_rd);

	close(fileIndex);

	free(buffer);

	return (byte_wr);
}
