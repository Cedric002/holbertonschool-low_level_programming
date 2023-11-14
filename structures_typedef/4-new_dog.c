#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dog.h"
/**
 * new_dog - entry
 * @name: nom du nouveau chien
 * @age: age du nouveau chien
 * @owner: proprietaire
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(struct dog));

	if (d != NULL)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}

	else
	{
		return (NULL);
	}
}
