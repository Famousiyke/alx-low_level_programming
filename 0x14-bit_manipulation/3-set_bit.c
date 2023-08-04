#include "main.h"
#include <stdio.h>

/**
 * set_bit - a function that sets the value of a bit
 * to 1 at a given index.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
