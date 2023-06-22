#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: the character to be check in ASCII table
 * Return: Always 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
