#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 * Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *x = NULL;
	unsigned int i;
	int a;
	int b;
	int count;

	count = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	x = (char *)malloc((a + b + 1) * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		x[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		x[i] = s2[count];
		count++;
	}
	return (x);
}
