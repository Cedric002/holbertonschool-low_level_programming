#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * @argc: argument
 * @argv: tableau
 *
 * Return: mynameis
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int nbarg;
	for (nbarg = 0; nbarg < argc; nbarg++)

		printf("argv[%2d]: %s\n", nbarg, argv[nbarg]);

	return (0);
}
