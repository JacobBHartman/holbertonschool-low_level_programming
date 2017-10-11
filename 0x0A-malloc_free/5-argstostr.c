#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all args to string
 * @ac: arg count
 * @av: pointer to an array of pointers to strings
 *
 * Return: pointer to a char (concatenated string)
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int sum;
	int i, j, k;

	sum = 0;
	if (ac == 0 || av == NULL)
		return NULL;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			sum += 1;
		sum += 1;
	}
	sum += 1;
	s = malloc(sum * sizeof(char));
	k = 0;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			s[k] = av[i][j];
		s[k] = '\n';
		k++;
	}
	return (s);
}
