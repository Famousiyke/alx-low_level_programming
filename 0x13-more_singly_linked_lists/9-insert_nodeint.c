#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - a function that Inserts a new node
 * to a listint_t list at a given position.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @idx: The index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw, *copy = *head;
	unsigned int nd;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;

	if (idx == 0)
	{
		nw->next = copy;
		*head = nw;
		return (nw);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;
	}

	nw->next = copy->next;
	copy->next = nw;

	return (nw);
}
