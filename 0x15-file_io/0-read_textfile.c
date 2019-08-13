#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - reads text file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *buf;
	ssize_t count;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	n = read(fd, buf, letters);
	if (n == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);

	count = write(STDOUT_FILENO, buf, n);
	if (count == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (count);
}
