#ifndef DOG
#define DOG

/**
 * struct dog - mon chien
 * @name: nom
 * @age: age
 * @owner: 2nd nom
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - mon chien
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
