#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint -  a function that prints
 * all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nds++;
		h = h->next;
	}

	return (nds);
}
