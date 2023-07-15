#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: size of the memory to be allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *q;

	q = malloc(b);

	if (q == NULL)
		exit(98);

	return (q);
}

