#include "holberton.h"

/**
 * is_prime_checker - iterates over primes
 * @d: divisor
 * @n: guess
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_checker(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_checker(n, ++d));
}

/**
 * is_prime_number - checks if number is prime
 * @n: the number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_checker(n, 2));
}
