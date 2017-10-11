#include <stdio.h>
#include <string.h>

/**
 * main - prints the command name
 * @argc: argument count
 * @argv: pointer to an array of pointers to arrays
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
