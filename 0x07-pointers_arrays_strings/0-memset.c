#include "main.h"
/**
 * _memset - A function that fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: the  value to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}

