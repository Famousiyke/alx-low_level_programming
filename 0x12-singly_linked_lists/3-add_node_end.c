#include "lists.h"
#include <string.h>

/**
 * add_node_end - a function that adds a new
 * node at the end of a list_t list
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 * Return: The address of the new element
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *cop;
	int lth;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	cop = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lth = 0; str[lth];)
		lth++;

	new->str = cop;
	new->len = lth;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
