#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: a pointer to the first occurrence of the character
 * if c is found
 * if c is not found - Null
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);

}

