#include "main.h"
/**
  *_strncpy - function that copies string
  *@src: value
  *@dest: value
  *@n: value
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
