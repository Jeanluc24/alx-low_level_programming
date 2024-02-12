#include<stdio.h>
#include "main.h"

/**
 * create_file - Creating a file
 * @filename: The name of the file.
 * @text_content: The content writed in the file.
 * Return: 1 if it success or -1 if it fails.
 */
	int create_file(const char *filename, char *text_content)
	{
	int count;
	int letters_wr;
	int result;

	if (!filename)
		return (-1);

	count = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (count == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_wr = 0; text_content[letters_wr]; letters_wr++)
		;

	result = write(count, text_content, letters_wr);

	if (result == -1)
		return (-1);

	close(count);

	return (1);
}
