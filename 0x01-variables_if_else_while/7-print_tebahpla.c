#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 26)
	{
		putchar('z' - i);
		i++;
	}
	putchar('\n');
	return (0);
}
