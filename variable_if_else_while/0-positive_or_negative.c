#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d \n", n);

	if (n > 0)
	{
		printf("C'est positif. \n");
	}
	else if (n < 0)
	{
		printf("C'est negatif. \n");
	}
	else
	{
		printf("C'est nul. \n");
	}

	return (0);
}
