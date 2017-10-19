#include "3-calc.h"

/**
 * main - commands the program
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	/* declare variables */
	int a;
	int b;

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

	/* print result */
	printf("%i\n", get_op_func(argv[2])(a, b));

	return (0);
}
