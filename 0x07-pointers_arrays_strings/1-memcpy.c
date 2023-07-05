#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer tothe memory area to copy into
 * @src: the source to copy from
 * *@n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
