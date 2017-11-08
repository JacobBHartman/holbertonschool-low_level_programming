#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print, 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t red;
	ssize_t rote;
	unsigned int i;

	/* check for null */
	if (filename == NULL)
		return (0);
	/* malloc */
	buf = malloc(sizeof(*buf) * (letters + 1));
	if (buf == NULL)
		return (-1);

	/* read */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	red = read(fd, buf, letters);

	buf[letters] = '\0';

	close(fd);

	/* write */
	fd = open(filename, O_WRONLY);

	if (fd == -1)
		return (0);

	rote = write(fd, buf, red);

	for (i = 0; buf[i] != '\0'; i++)
		write(STDOUT_FILENO, &buf[i], 1);

	close(fd);

	return (rote);
}
