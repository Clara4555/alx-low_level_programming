#include <stdio.h>
#include "function_pointers.h"
/**
  *array_iterator - prints parameter on each element of an array.
  *@action: ponter
  *@array :array
  *@size : element to print size
  *
  *Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
