#include "variadic_functions.h"

/**
 * print_all - prints all the arguments no matter the type
 * @format - a list of times of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	/* declare variables */
	va_list vl;
	unsigned int i;
	unsigned int k;
	char *format2;

	format2 = malloc(sizeof(char) * 10);

	/* get rid of any extraneous letters */
	k = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'i' || format[i] == 'c' || format[i] == 'f' || format[i] == 's')
		{
			format2[k] = format[i];
			k++;
		}
		i++;
	}
	format2[k] = '\0';


	/* initialize the argument list */
	va_start(vl, NULL);

	/* switch it son */
	i = 0;
	while (*(format2 + i))
	{
		switch(*(format2 + i)) {
		case 'i':
			printf("%i", va_arg(vl, int));
			break;
		case 'c':
			printf("%c", va_arg(vl, int));
			break;
		case 's':
			printf("%s", va_arg(vl, char *));
			break;
		case 'f':
			printf("%f", va_arg(vl, double));
			break;
		}
		if (i < k - 1)
			printf(", ");
		i++;
	}

	/* print new line */
	printf("\n");

	/* clean up */
	va_end(vl);
}
