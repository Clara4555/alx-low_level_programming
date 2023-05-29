#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *_calloc - allocates memory
  *@size: size
  *@nmemb: elements
  *Return: pointer
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		f[a] = 0;
	return (f);
}
