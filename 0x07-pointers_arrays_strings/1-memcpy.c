#include "main.h"
/**
  *_memcpy - function that copies memory area.
  *@dest: memory where it will be stored
  *@src: memory where it will be copied
  *@n: number of bytes
  *Return: copied memory with n byted changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int g = n;

	for (; j < g; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
