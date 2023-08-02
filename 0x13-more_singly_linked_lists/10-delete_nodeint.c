#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: On success - 1.
 * On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int nd;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}
