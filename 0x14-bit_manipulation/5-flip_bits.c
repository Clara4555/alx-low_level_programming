#include <stdio.h>
#include "main.h"
/**
  *flip_bits -  function that returns the number of bits
  *@n: digit
  *@m: digit
  *
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, flip_bit = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = e >> a;
		if (c & 1)
			flip_bit++;
	}
	return (flip_bit);
}
