#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * followed by a new line
 * @a: array of integers
 * @n: number of elements
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}

