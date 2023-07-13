#include "main.h"

/**
* _strpbrk - a function that finds first
* matching char in string
* @s: string to search matching char from
* @accept: characters that could match
* Return: Always 0
*/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
	{
		if (*s == accept[k])
		return (s);
	}
		s++;
	}

	return ('\0');
}

