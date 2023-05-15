#include "main.h"
/**
  *_memset - function to block memory with specific value
  *@s: address of memory to be filled
  *@b: value
  *@n: bytes to be changed
  *Return: changed arrays with value of n
  */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}
