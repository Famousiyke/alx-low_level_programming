#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - a function that Finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *rat;

	if (head == NULL || head->next == NULL)
		return (NULL);

	cat = head->next;
	rat = (head->next)->next;

	while (rat)
	{
		if (cat == rat)
		{
			cat = head;

			while (cat != rat)
			{
				cat = cat->next;
				rat = rat->next;
			}

			return (cat);
		}

		cat = cat->next;
		rat = (rat->next)->next;
	}

	return (NULL);
}
