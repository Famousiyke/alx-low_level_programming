#include "main.h"
/**
 * _atoi - a program that converts a string to an integer
 * @s: string parameter
 * Return: converted integer from string
 */

int _atoi(char *s)
{
	unsigned int dig = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			dig = (dig * 10) + (*s - '0');
		else if (dig > 0)
			break;
	} while (*s++);

	return (dig * sign);
}
