#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: a pointer to a character in an array
 */
char *cap_string(char *s)
{
	int i;
	int inWord;

	inWord = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z' && inWord == 0)
		{
			inWord = 1;
			s[i] -= 32;
		}
		if (s[i] >= 'A' && s[i] <= 'Z' && inWord == 0)
			inWord = 1;
		if (s[i] >= '0' && s[i] <= '9' && inWord == 0)
			inWord = 1;
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '.' || s[i] == '\t')
			inWord = 0;
	}
	return (s);
}
