#include <stdio.h>

/**
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 10)
				putchar('0' + j / 10);
			putchar('0' + j % 10);
		}
		putchar('\n');
	}
	return (0);
}
