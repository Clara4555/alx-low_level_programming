#include "main.h"
/**
  *_strncat - function that concantenates strings
  *@src: values
  *@dest: value
  *
  *@n: value
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int v;
	int c;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[v] = src[c];
		v++;
		c++;
	}
	dest[v] = '\0';
	return (dest);
}
