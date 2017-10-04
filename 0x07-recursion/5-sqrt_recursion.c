#include "holberton.h"

/**
 * _sqrt_helper - finds the square root
 * @guess: a stab at the possible square root
 * @nu: the number that we are taking the square root of
 *
 * Return:
 */
int _sqrt_helper(int guess, int nu)
{
	if (guess * guess == nu)
		return(guess);
	else if (guess >= nu / 2)
		return (-1);
	return (_sqrt_helper(guess + 1, nu));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return(_sqrt_helper(1, n));
}
