#include "main.h"
#include <stdlib.h>
/**
* _calloc -  a function that allocates memory for an array
* using malloc
*@nmemb: number of elements
*@size: size of the memory  to be allocated
*Return: If malloc fails, then _calloc returns NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alm;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	alm = malloc(nmemb * size);
	if (alm != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			alm[a] = 0;
		return (alm);
	}
	else
		return (NULL);
}
