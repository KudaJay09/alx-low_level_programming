#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: txt being read
 * @letters: number of letters to read and print
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}
