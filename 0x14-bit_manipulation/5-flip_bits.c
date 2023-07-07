#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * flip_bits -  function that returns the number of bits you would need
 * *to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits Always 0 success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, t = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			t++;
	}

	return (t);
}
