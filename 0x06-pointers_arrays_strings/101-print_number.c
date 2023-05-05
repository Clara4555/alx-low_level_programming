#include "main.h"
#include <stdio.h>
/**
  *print_number - function that prints integer
  *@n: input
  *Return: no return
  */
void print_number(int n)
{
	unsigned int  a, b, counter;

	if (n < 0)
	{
		_putchar(45);
		a =  n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	counter = 1;
	while (b > 9)
	{
		b /= 10;
		counter *= 10;
	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + 48);
	}
}
