#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string
 *
 * Return: an array of pointers to words
 */
char **strtow(char *str)
{
	/* declare variables */
	char **ourstr; /* array of arrays we return */
	int i;         /* index */
	int wc;        /* word count */
	int len;       /* word length */

	/* check if str is null or empty */
	if (str == NULL || str == '\0')
		return (NULL);

	/* allocate memory for double pointer */
	wc = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			wc++;
	}
	ourstr = malloc(wc * sizeof(char *));

	/* allocate memory for each pointer to an array */
	wc = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
			len++;
		else if (str[i] != ' ' && str[i - 1] != ' ')
			len++;
		else if (str[i] == ' ' && str[i - 1] != ' ')
		{
			*(ourstr + wc) = malloc((1 + len) * sizeof(char));
/*			if (*(ourstr + wc) == NULL)
			{
				while (wc >= 0)
				{
					free(*(ourstr + wc));
					wc--;
				}
				free(ourstr);
				return (NULL);
				}*/
			len = 0;
			wc++;
		}
	}

	/* copy from passed string to string we are returning */
	wc = 0;
	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			*(*(ourstr + wc) + len) = *(str + i);
			len++;
		}
		else if (str[i] != ' ' && str[i - 1] != ' ')
		{
			*(*(ourstr + wc) + len) = *(str + i);
			len++;
		}
		else if (str[i] == ' ' && str[i - 1] != ' ')
		{
			*(*(ourstr + wc) + len) = '\0';
			len = 0;
			wc++;
		}
	}
	*(ourstr + wc) = NULL;

	/* free up allocated memory */
	while (wc >= 0)
	{
		free(*(ourstr + wc));
		wc--;
	}
	free(ourstr);

	/* return da array of arrays! */
	return (ourstr);
}
