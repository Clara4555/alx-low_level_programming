#include <stdio.h>
#include "main.h"
/**
  *array_range - funcion to create arrays integers
  *
  *@max: max
  *@min: min
  *Return: a
  *
  */
int *array_range(int min, int max)
{
	int *a;
	int b;


	if (min > max)
		return (NULL);
	a = malloc(sizeof(*a) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++, min++)
		a[b] = min;
	return (a);
}
