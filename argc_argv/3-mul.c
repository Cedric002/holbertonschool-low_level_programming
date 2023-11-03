#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * @argc: argument
 * @argv: tableau
 *
 * Return: multiplication
 */
int main(int argc, char *argv[])
{
	int nb1;
	int nb2;
	int mul;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	nb1 = atoi(argv[1]);
	nb2 = atoi(argv[2]);
	mul = nb1 * nb2;

	printf("%d\n", mul);
	return (0);
}
