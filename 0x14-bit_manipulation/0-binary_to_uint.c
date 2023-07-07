#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 * Return: number Aways 0 (success)
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int d = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		d = 2 * d + (b[a] - '0');
	}

	return (d);
}

