#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int j;
	int h;
	int temp;

	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++)
	{
		temp = s[i];
		for (h = 0; h < i - j; h++)
		{
			s[i - h] = s[i - h - 1];
		}
		s[j] = temp;
	}
}
