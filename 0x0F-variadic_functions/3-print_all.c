#include "variadic_functions.h"

/**
 * print_all - prints all the arguments no matter the type
 * @format: a list of times of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list vl; /* declare variables */
	unsigned int i; char *storage;
	unsigned int ignore;

	va_start(vl, format); /* initialize the argument list */
	ignore = 0; i = 0; /* perform primary function */
	while (*(format + i))
	{
		switch (*(format + i))
		{
		case 'i':
			printf("%i", va_arg(vl, int));
			break;
		case 'c':
			printf("%c", va_arg(vl, int));
			break;
		case 's':
			storage = va_arg(vl, char *);
			switch (*storage)
			{
			case '\0':
				printf("(nil)");
				break;
			default:
				printf("%s", storage);
			}
			break;
		case 'f':
			printf("%f", va_arg(vl, double));
			break;
		default:
			ignore = 1;
		}
		if (*(format + 1 + i) != '\0' && ignore == 0)
			printf(", ");
		ignore = 0;
		i++;
	}
	printf("\n"); /* print newline */
	va_end(vl); /* cleanup */
}
