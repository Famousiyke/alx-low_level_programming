#include "main.h"

/**
 * wildcmp - a function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0.
 * @st1: string 1.
 * @st2: string 2. with wild character
 * Return: 1 if are identical
 * 0 if not.
 */

int wildcmp(char *st1, char *st2)
{
	if (*st2 == '*' && *(st2 + 1) != '\0' && *st1 == '\0')
		return (0);
	if (*st1 == '\0' && *st2 == '\0')
		return (1);
	if (*st1 == *st2)
		return (wildcmp(st1 + 1, st2 + 1));
	if (*st2 == '*')
		return (wildcmp(st1, st2 + 1) || wildcmp(st1 + 1, st2));
	return (0);
}
