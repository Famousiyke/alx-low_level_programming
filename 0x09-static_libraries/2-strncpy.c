#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: pointer to destination input
 * @src: pointer to source
 * @n: number of bytes of @src
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
