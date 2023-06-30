#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2: string gfor comparation
 *
 * Return: the difference in the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

