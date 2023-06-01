#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_memset - function that fills memory
  *@b: byte
  *@s: address
  *@n: number of bytes
  *Return: s
  *
  */
char *_memset(char *s, char b, unsigned int n)
{
	int v = 0;

	for (; n > 0; v++)
	{
		s[v] = b;
		n--;
	}
	return (s);
}
