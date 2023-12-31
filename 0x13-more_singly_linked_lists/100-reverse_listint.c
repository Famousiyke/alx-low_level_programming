#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint -a function that reverses a listint_t list.
 * @head: A pointer to the address of
 * the head of the list_t list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}

	(*head)->next = backward;

	return (*head);
}
