#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The matrix of the integers
 * @size: The size of the matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, v;

	sum1 = 0;
	sum2 = 0;

	for (v = 0; v < size; v++)
	{
		sum1 = sum1 + a[v * size + v];
	}
	for (v = size - 1; v >= 0; v--)
	{
		sum2 += a[v * size + (size - v - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
