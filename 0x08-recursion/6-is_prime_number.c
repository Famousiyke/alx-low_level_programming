#include "main.h"

/**
 * is_prime - a function that detects if an
 * input number is a prime number.
 * @x: input number.
 * @y: iterator.
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number.
 */

int is_prime(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(x, y + 1));
}

/**
 * is_prime_number - a function that detects if an
 * input number is a prime number.
 * @n: input number.
 * Return: 1 if n is a prime number
 * 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
