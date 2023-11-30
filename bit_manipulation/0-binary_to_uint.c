#include "main.h"

/**
 * binary_to_uint - Convertir binaire en entier non signer
 * @b: pointeur qui pointe vers string de 0 et 1
 *
 * Return: ombre converti
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = strlen(b);
	int i;
	unsigned int j;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			unsigned int base = 2;
			unsigned int exponent = len - 1 - i;
			unsigned int power = 1;

			for (j = 0; j < exponent; ++j)
			{
				power = base;
			}

			result = power;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (result);
}
