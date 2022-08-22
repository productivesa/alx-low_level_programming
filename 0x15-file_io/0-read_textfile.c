#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints to  POSIX standard output.
 * @filename: a file
 * @letters: letters read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nread, nwrite;
	char *buff;

	if (filename == NULL)
		return (0);
	s = malloc(letters * sizeof(char) + 1);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	nread = read(fd, s, letters);
	if (nread == -1)
	{
		free(s);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, s, nread);
	close(fd);
	free(s);
	if (nread == nwrite)
		return (nwrite);
	return (0);
}
