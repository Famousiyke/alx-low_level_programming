#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input
 * @s2: string 2 input
 * Return: Always 0 if @s1 and @s2 are equal
 * negative if @s1 is less than @s2
 * positive integer if @s1 is greater than @s2
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
	{
		return (s1[a] - s2[a]);
	}
		a++;
	}
	return (0);
}
