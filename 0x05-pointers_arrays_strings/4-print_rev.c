#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string parameter
 * Return: 0
 */
void print_rev(char *s)
{
	int index = 0;
	int a;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	s--;
	for (a = index; a > 0; a--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
