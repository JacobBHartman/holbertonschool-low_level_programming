#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hhello";
	char *f;

	f = _strchr(s, 'l');
	printf("%s\n", f);
	f = _strchr(s, '\0');
	printf("%s\n", f);
        f = _strchr(s, 'h');
        printf("%s\n", f);
	return (0);
}