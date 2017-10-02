#include "holberton.h"

void reverse_carray(char *a, int n)
{
        int i;
        char temp;

        for (i = 0; i < n / 2; i++)
        {
                temp = a[i];
                a[i] = a[n - 1 - i];
                a[n - 1 - i] = temp;
        }
}
/**
 * infinite_add - add two numbers
 * @n1: first number
 * @n2: two numbers
 * @r: buffer to store value
 * @size_r: buffer size
 *
 * Return: pointer to an array of characters
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int j;
	int carry;

	carry = 0;
	r[0] = 1;
	/* find number of elements in arrays */
	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;
	/* reverse elements of array in order to add easier */
	reverse_carray(n1, i);
	reverse_carray(n2, j);
	n1[i] = '\0';
	n2[j] = '\0';
	/* adder */
	for (i = 0; eon1 != 1 && eon2 != 1; i++)
	{
		carry += n1[i] + n2[i] - 96;
		if (carry > 9)
		{
			r[i] = carry - 10 + 48;
			carry = 1;
		}
		else
		{
			r[i] = carry + 48;
		}
	}
	r[i] = '\0';
	for (i = 0; r[i] != '\0'; i++)
		;
	reverse_carray(r, i);
	if (i > size_r)
		return (0);
	else
	{
		for (i = 0; i < size_r; i++)
			;
		r[i] = '\0';
		return (r);
	}
}
