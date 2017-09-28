#include "holberton.h"

/**
 * leet - translates into leet
 * @s: string to be translated
 *
 * Return: a pointer to a translated string
 */
char *leet(char *s)
{
	int i;
	int j;
	char t1[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char t2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == t1[j] || s[i] == t1[j + 5])
				s[i] = t2[j];
		}
	}
	return (s);
}
