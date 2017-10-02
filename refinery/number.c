#include <stdio.h>

int main(void)
{
	int i;
	unsigned int ui;
	int mod;
	int digit;

	i = -1024;
	mod = 1;
	if (i < 0)
	{
		putchar('-');
		ui = -i;
	}
	else
	{
		ui = 1 * i;
	}

	while (10 * mod < ui)
		mod *= 10;

	while (mod > 0)
	{
		digit = ui / mod;
		putchar('0' + digit);
		ui -= mod * digit;
		mod /= 10;
	}
	putchar('\n');
}
