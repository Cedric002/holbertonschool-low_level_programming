#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * @argc: argument
 * @argv: tableau
 *
 * Return: nb argument
 */
int main(int argc, char *argv[])
{
	int i,
	mul = 0;

	if (argc != 3)
	{
		printf("error\n");

		return (1);
	}

	for (i = 1; i < argc; i++)

		mul = atoi(argv[i]) * atoi(argv[i]);

	printf("%d\n", mul);

	return (0);
}
