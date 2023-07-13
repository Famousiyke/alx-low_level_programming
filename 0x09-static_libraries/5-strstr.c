#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: string to search from
 * @needle: subtring to search for
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *p, *n;

	while (*haystack != '\0')
	{
		p = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (p);
		haystack++;
	}
	return ('\0');
}
