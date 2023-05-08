#include "main.h"
/**
 *_memset - function that fills memory with a constant byte.
 *@s: address of memory
 *@b: value
 *@n: number of value to be altered
 *Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
