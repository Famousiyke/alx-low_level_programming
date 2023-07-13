#include "main.h"

/**
 * _memset - a program that fills a memory with a value
 * @s: input pointer to memory to be filled
 * @b: input variable of char type desired
 * @n: number of bytes
 * Return: A pointer to the filled memory @s
 */

char *_memset(char *s, char b, unsigned int n)

{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
