#include "main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
