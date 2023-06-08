#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  *set_bit -  function that sets the value of a bit to 1
  *@n: pointer
  *@index: index
  *Return: 1 or -1 otherwise
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index | *n));
	return (1);
}
