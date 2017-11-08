#include "holberton.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t length = strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (write(fd, text_content, length) < 0)
		return (-1);

	close(fd);

	return (1);
}
