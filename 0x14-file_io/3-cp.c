#include "holberton.h"

/**
 * error_message - reads an error code and prints the proper message
 * @error_code: the error code
 * Return: void
 */
void error_message(int error_code, ...)
{
	va_list ap;

	va_start(ap, error_code);

	if (error_code == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	else if (error_code == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file");
		dprintf(STDERR_FILENO, " %s\n", va_arg(ap, char *));
		exit(98);
	}

	else if (error_code == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", va_arg(ap, char *));
		exit(99);
	}

	else if (error_code == 100)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", va_arg(ap, int));
		exit(100);
	}

	va_end(ap);
}

/**
 * main - copies the content of a file to another file
 * @argc: the argument count
 * @argv: a pointer to an array of strings
 * Return: ???
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	char buffer[BUFFER_SIZE];
	ssize_t red, rote;

	if (argc != 3)
		error_message(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		error_message(98, argv[1]);

	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to < 0)
		error_message(99, argv[2]);

	do {
		red = read(file_from, buffer, BUFFER_SIZE);
		if (red < 0)
			error_message(98, argv[1]);
		rote = write(file_to, buffer, red);
		if (rote < 0)
			error_message(99, argv[2]);
	} while (red == BUFFER_SIZE);

	if (close(file_from) < 0)
		error_message(100, file_from);
	if (close(file_to) < 0)
		error_message(100, file_to);

	return (0);
}
