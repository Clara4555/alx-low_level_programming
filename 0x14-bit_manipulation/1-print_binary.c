#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *print_binary - function that prints the binary representation of a number.
  *@n: digit to be printed
  *
  *Return: ALWAYS 0
  */
void print_binary(unsigned long int n)
{
	int a, digit = 0;
	unsigned long int c;

	for (a = 63; a >= 0; a--)
	{
		c = n >> a;
		if (c & 1)
		{
			_putchar('1');
			digit++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
