#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: string parameter
 * Return: Always 0
 */

int _strlen(char *s)
{
	int lgth = 0;

	while (*s != '\0')
	{
		lgth++;
		s++;
	}

	return (lgth);
}

