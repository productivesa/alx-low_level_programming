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
	int ntoread, ntowrite, fd;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(letters * sizeof(char) + 1);
	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	ntoread = read(fd, buff, letters);
	if (ntoread == -1)
	{
		free(buff);
		return (0);
	}
	ntowrite = write(STDOUT_FILENO, buff, ntoread);
	close(fd);
	free(buff);
	if (ntoread == ntowrite)
		return (ntowrite);
	return (0);
}
