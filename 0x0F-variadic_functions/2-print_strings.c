#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: the number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare variables */
	va_list vl;
	unsigned int i;
	char *storage;

	/* initialize the argument list */
	va_start(vl, n);

	/* perform the function's primary function */
	for (i = 0; i < n; i++)
	{
		storage = va_arg(vl, char *);
		if (storage == NULL)
			printf("(nil)");
		else
		{
			printf("%s", storage);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	printf("\n");

	/* clean up */
	va_end(vl);
}
