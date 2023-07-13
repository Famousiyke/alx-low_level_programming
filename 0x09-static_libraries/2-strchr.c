#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to our string array input
 * @c: character to locate from
 * Return: the first occurence of charatcer
 * or null if not found
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
