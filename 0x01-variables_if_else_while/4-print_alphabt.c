#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[26];
	int i;

	i = 0;
	while (i < 26)
	{
		alpha[i] = 'a' + i;
		i++;
	}
	i = 0;
	while (i < 26)
	{
		if (alpha[i] == 'q' || alpha[i] == 'e')
			;
		else
			putchar(alpha[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
