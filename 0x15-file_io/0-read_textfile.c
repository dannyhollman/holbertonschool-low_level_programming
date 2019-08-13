#include "holberton.h"
/**
 * read_textfile - reads text file and prints it to stdout
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char buf[10000];
	size_t count;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	n = read(fd, buf, letters);
	count = write(1, buf, n);

	count++;

	return (count);
}
