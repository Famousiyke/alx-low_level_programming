#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 * @scot: struct dog to free
 * Return: Always 0
 */

void free_dog(dog_t *scot)
{
	if (scot)
	{
		free(scot->name);
		free(scot->owner);
		free(scot);
	}
}
