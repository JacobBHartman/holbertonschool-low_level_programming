#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file
 * @text_content: a null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t length;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	length = strlen(text_content);

	/* write */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (write(fd, text_content, length) < 0)
		return (-1);

	close(fd);

	return (1);
}
