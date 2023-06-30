#include "main.h"
/**
 * reverse_array - function that reverses the content
 * of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (x = 0; x < n--; x++)
	{
		b = a[x];
		a[x] = a[n];
		a[n] = b;
	}
}

