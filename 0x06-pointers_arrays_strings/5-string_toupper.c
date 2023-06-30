#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @s: analyzed string
 *
 * Return: string
 */
char *string_toupper(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] >= 'a' && s[x] <= 'z')
			s[x] = s[x] - 32;
		x++;
	}
	return (s);
}

