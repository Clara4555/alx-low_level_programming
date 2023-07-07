#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: Always 0 successs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (index > 63)
		return (-1);

	b = (n >> index) & 1;

	return (b);
}
