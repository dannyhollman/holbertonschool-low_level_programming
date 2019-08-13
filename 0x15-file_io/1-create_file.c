#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: file content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	fd = open(filename, O_CREAT | O_RDWR, 0700);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
