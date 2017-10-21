#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* initialize variables */
	va_list vl;
	unsigned int i;

	/* initialize the argument list */
	va_start(vl, n);

	/* loop through the argument list */
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(vl, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	/* clean up */
	va_end(vl);
}
