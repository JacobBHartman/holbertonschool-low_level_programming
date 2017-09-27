#include "holberton.h"

/**
 * _atoi - converts a string to an int
 * @s: string to be converted
 * Return: the int we are converting into
 */
int _atoi(char *s)
{
	int i;
	int number;
	int digit;
	int neg;

	neg = 1;
	digit = 0;
	number = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			neg *= -1;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			digit = s[i] - '0';
			number = 10 * number;
			number += digit;
			number *= neg;
			i++;
			while (s[i] >= '0' && s[i] <= '9')
			{
				digit = s[i] - '0';
				number = 10 * number;
				if (number > 0)
					number += digit;
				else
					number -= digit;
				i++;
			}
			break;
		}
		else
		{
			i++;
		}
	}
	return (number);
}
