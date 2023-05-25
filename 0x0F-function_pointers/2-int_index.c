#include <stdio.h>
#include "function_pointers.h"
/**
  *int_index - function tha searccches for an integer
  *@array: array
  *@cmp: pointer
  *@size: size
  *Return: always 0 (success)
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);
}
