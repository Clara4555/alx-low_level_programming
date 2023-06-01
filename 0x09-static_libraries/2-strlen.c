#include "main.h"
/**
  *_strlen - funcion that return sthe length of a string
  *@s: string to determine the length
  *
  *Return: length_string
  *
  */
int _strlen(char *s)
{
	int length_string = 0;

	while (*s != '\0')
	{
		length_string++;
		s++;
	}
	return (length_string);
}
