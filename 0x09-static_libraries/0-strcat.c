#include <stdio.h>
#include "main.h"
/**
  *_strcat - function for concantenation
  *@dest: value
  *@src: value
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int v;
	int a;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	a = 0;
	while (src[a] != '\0')
	{
		dest[v] = src[a];
		v++;	
		a++;
	}
	dest[v] = '\0';
	return (dest);
}
