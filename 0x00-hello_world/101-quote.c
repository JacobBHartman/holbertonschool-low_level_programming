#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buf[61] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\
\n";
	write(2, buf, strlen(buf));

	return (1);
}
