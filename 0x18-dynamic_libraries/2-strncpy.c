#include "main.h"
/**
  *_strncpy - function that copies a string.
  *@dest: destination
  *@src: source
  *@n: amount of bytes from source
  *Return: pointer to destination
  */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	for (f = 0; f < n && src[f] != '\0'; f++)
		dest[f] = src[f];
	for (; f < n; f++)
		dest[f] = '\0';
	return (dest);
}
