#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: the string to be searched
 * @needle: the substring to be located
 * Return:  a pointer to the beginning of the located substring
 * if the substring is not found - Null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
