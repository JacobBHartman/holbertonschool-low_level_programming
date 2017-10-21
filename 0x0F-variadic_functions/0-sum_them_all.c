#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declare variables */
	va_list vl;
	unsigned int i;
	int sum;

	/* checkpoint */
	if (n == 0)
		return (0);

	/* initialize an argument pointer variable */
	va_start(vl, n);

	/* start summing */
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(vl, int);

	/* clean up */
	va_end(vl);

	/* return */
	return (sum);
}
