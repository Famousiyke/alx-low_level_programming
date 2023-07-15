#include "main.h"
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arri;
	int a, b = 0;

	if (min > max)
		return (NULL);
	arri = malloc(sizeof(*arri) * ((max - min) + 1));
	if (arri != NULL)
	{
		for (a = min; a <= max; a++)
		{
			arri[b] = a;
			b++;
		}
		return (arri);
	}
	else
		return (NULL);

}
