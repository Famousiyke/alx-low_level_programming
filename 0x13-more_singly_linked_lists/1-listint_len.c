#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - a function that Returns the number
 * of elements in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
