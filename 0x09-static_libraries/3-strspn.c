#include "main.h"
/**
 * _strspn - a function that gets the
 * length of a prexif substring
 * @s: pointer to string input
 * @accept: substring prefix to look for
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, y, f;

	a = 0;
	while (s[a] != '\0')
	{
		y = 0;
		f = 1;
		while (accept[y] != '\0')
		{
			if (s[a] == accept[y])
			{
				f = 0;
				break;
			}
			y++;
		}
		if (f == 1)
			break;
		a++;
	}

	return (a);
}
