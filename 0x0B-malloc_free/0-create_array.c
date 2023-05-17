#include "main.h"
#include <stdlib.h>
/**
  *create_array - function that creates an array of chars
  *@size:array size
  *@c: character to be assigned
  *Return:  pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int b;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		str[b] = c;
	return (str);
}
