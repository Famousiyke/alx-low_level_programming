#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initialize
 * a variable of type struct dog
 * @scot: input pointer to struct dog
 * @name: input for dog name
 * @age: input for dog age
 * @owner: input for dog owner
 * Return: Always 0
 */

void init_dog(struct dog *scot, char *name, float age, char *owner)
{
	if (scot)
	{
		/*scot->name = name;*/
		(*scot).name = name;
		(*scot).age = age;
		(*scot).owner = owner;
	}
}
