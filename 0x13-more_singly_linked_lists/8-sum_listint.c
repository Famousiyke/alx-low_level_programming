#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint -a function that Calculates the sum
 * of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If the list is empty - 0.
 * Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
