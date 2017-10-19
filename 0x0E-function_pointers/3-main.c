#include "3-calc.h"

/**
 * main - commands the program
 * @c: argument count
 * @v: pointer to arrays of strings
 *
 * Return: 0 if successful
 */
int main(int c, char *v[])
{
	/* declare variables */
	int a;
	int b;
	int (*func)(int, int);

	/* error checks */
	if (c != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (v[2] == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((strcmp(v[2], "/") == 0 || strcmp(v[2], "%") == 0) && *v[3] == '0')
	{
		printf("Error\n");
		return (100);
	}

	/* convert strings to int */
	a = atoi(v[1]);
	b = atoi(v[3]);

	/* get the function we need */
	func = get_op_func(v[2]);

	/* perform the operation */
	printf("%i\n", func(a, b));

	return (0);
}
