#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dog.h"
/**
 * init_dog - entry
 * @d: chien
 * @name: nom
 * @age: age
 * @owner: 2nd nom
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
