#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where to copy to
 *@src: what to copy
 *@n: number of bytes of @src
 *Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int a = n;

	for (; x < a; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
