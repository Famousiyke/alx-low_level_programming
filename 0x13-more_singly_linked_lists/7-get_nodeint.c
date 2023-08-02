#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index -a function that Locates
 * a given node of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 * Return: If the node does not exist - NULL.
 * Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nd;

	for (nd = 0; nd < index; nd++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
