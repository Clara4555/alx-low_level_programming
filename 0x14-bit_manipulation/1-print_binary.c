#include "main.h"
#include <stdio.h>
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number
 * Return: Always 0 success
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int t;

	for (i = 63; i >= 0; i--)
	{
		t = n >> i;

		if (t & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
