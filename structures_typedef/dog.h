#ifndef DOG
#define DOG

/**
 * struct dog - mon chien
 * @name: nom
 * @age: age
 * @owner: proprietaire
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
