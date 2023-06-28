#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string input
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int a, n;

	for (a = 0; str[a] != '\0'; ++a)
		;

	if (a % 2 == 0)
	{
		for (n = a / 2; str[n] != '\0'; ++n)
			putchar(str[n]);
	} else
	{
		for (n = ((a - 1) / 2) + 1; str[n] != '\0'; ++n)
			putchar(str[n]);
	}
	putchar('\n');
}
