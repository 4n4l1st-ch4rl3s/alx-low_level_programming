#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads data intext file and prints it out
 * @filename: pointer to thr file
 * @letters: number of chars displayed
 * Return: x - number of bytes read or 0 when func fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t x;
	ssize_t y;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	y = read(fd, buf, letters);
	x = write(STDOUT_FILENO, buf, y);

	free(buf);
	close(fd);
	return (x);
}
