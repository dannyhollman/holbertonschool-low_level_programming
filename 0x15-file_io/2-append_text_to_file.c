#include "holberton.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: content for file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[len])
		len++;

	fd = open(filename, O_RDWR | O_APPEND);
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
