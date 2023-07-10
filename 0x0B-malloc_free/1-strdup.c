#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL if str=Null
 * returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *x = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;
	x = (char *)malloc(n + 1 * sizeof(char));
	if (x != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			x[i] = str[i];
	} else
	{
		return (NULL);
	}
	x[i] = '\0';
	return (x);
}
