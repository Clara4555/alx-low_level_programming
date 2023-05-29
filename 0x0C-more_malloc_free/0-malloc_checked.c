#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
  *malloc_checked - function that allocates memory using malloc.
  *@b: bytes to be allocated
  *Return: pointer to the allocated memory
  *if fails  malloc_checked function should cause status value of 98
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
