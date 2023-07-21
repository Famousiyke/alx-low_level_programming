#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - a function that prints strings
 *followed by a new line
 *@separator: separator
 *@n:number of arguments
 *Return: the sum of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *q;
	char array[] = "(nil)";

	va_start(valist, n);
	for (a = 0; a < n; a++)
	{
		q = va_arg(valist, char *);
		if (q == NULL)
			q = array;
		if (a != (n - 1) && separator != NULL)
		{
			printf("%s%s", q, separator);
		} else
		{
			printf("%s", q);
		}
	}
	printf("\n");
	va_end(valist);
}
