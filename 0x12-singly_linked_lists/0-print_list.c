#include <stdio.h>
#include "lists.h"

/**
 * print_list -  a function that prints
 * all the elements of a list_t list
 * @h: The list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t q = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		q++;
	}

	return (q);
}
