#include "main.h"

/**
 * power_operation - a function that returns the natural
 * square root of a number.
 * @x: input number.
 * @y: iterator.
 * Return: square root
 */

int power_operation(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + power_operation(x, y + 1));
}

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: integer
 * Return: square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
