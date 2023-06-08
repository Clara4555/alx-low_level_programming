#include <stdio.h>
#include "main.h"
/**
  *binary_to_uint - function that converts a binary number to an unsigned int
  *@b: string
  *
  *Return:  the converted number, or 0
  */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int binary_converter = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		binary_converter = 2 * binary_converter + (b[a] - '0');
	}
	return (binary_converter);
}
