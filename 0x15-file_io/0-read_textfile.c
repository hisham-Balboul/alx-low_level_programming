#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text;
	ssize_t fd;
	ssize_t write;
	ssize_t read;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	text = malloc(sizeof(char) * letters);
	read = read(fd, text, letters);
	write = write(STDOUT_FILENO, text, read);

	free(text);
	close(fd);
	return (write);
}
