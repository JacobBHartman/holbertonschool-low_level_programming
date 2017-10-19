#include "3-calc.h"

/**
 * main - commands the program
 * @argc: argument count
 * @argv: pointer to arrays of strings
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	/* declare variables */
	int a;
	int b;
	int (*func)(int, int);

	/* error checks */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (*argv[2] != '*' && *argv[2] != '+' && *argv[2] != '-' && *argv[2] \
	    != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		return (99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	/* convert strings to int */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* get the function we need */
	func = get_op_func(argv[2]);

	/* perform the operation */
	printf("%i\n", func(a, b));

	return (0);
}
