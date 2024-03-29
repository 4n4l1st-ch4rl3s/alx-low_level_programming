#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file
 * @filename: pointer to the name of a file
 * @text_content: string to be appended
 * Return: -1 if NULL, -1 if user lacks permission and 1 for sucess
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, length);

	if (x == -1 || y == -1)
		return (-1);

	close(x);
	return (1);
}
