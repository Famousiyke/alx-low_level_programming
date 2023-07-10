#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 * if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **mat;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	mat = (int **) malloc(sizeof(int *) * height);

	if (mat == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mat[a] = (int *) malloc(sizeof(int) * width);
		if (mat[a] == NULL)
		{
			free(mat);
			for (b = 0; b <= a; b++)
				free(mat[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			mat[a][b] = 0;
		}
	}
	return (mat);
}
