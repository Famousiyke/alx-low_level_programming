#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @scot: pointer to struct dog
 * Return: Always 0
 */

void print_dog(struct dog *scot)
{
	if (scot != NULL)
	{
		printf("Name: ");
		scot->name == NULL ? printf("(nil)\n") : printf("%s\n", scot->name);
		printf("Age: %f\n", scot->age);
		printf("Owner: ");
		scot->owner == NULL ? printf("(nil)\n") : printf("%s\n", scot->owner);
	}
}
