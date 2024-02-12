#include<stdio.h>
#include "main.h"

/**
 * append_text_to_file - Appending text at the end of a file
 * @filename: The name of the file.
 * @text_content: The added content.
 * Return: 1 if the file exists or -1 if the fails does not exist.
 */
	int append_text_to_file(const char *filename, char *text_content)
	{
	int count;
	int letters_wr;
	int index;

	if (!filename)
		return (-1);

	count = open(filename, O_WRONLY | O_APPEND);

	if (count == -1)
		return (-1);

	if (text_content)
	{
		for (letters_wr = 0; text_content[letters_wr]; letters_wr++)
			;

		index = write(count, text_content, letters_wr);

		if (index == -1)
			return (-1);
	}

	close(count);

	return (1);
}
