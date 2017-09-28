#include "holberton.h"

/**
 * rot13 - rotates source 13 alphabetic charcters
 * @s: string to be translated and returned
 *
 * Return: a pointer to an array of characters that was translated
 */
char *rot13(char *s)
{
	int i;
	int j;
	char m[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char t[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
			if (s[i] == m[j])
			{
				s[i] = t[j];
				break;
			}
	}
	return (s);
}
