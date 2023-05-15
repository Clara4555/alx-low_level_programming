#include "main.h"
/**
  *_memcpy - function to copy memory area
  *@dest:where memory is stored
  *@src: where memory is copied
  *@n: bytes
  *Return: copied memory with n (byte) changed
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int k = 0;

	for (; l < k; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
