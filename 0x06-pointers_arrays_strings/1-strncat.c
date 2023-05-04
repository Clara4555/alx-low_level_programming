#include "main.h"
/**
  *_strncat - function that concatenates two strings
  *@dest: destination
  *@src: source
  *@n: amounts of byte used from source
  *Return: pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int g;
	int h;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[g] = src[h];
		g++;
		h++;
	}
	dest[g] = '\0';
	return (dest);
}
