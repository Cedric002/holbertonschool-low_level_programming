#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dog.h"
/**
 * print_dog - entry
 * @d: chien
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
		if ((d->name) != NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if ((d->owner) != NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
}
