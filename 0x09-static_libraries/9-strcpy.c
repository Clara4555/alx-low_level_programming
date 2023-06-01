#include "main.h"
/**
  *_strcpy - function that copies  strings pointed
  *@dest: to copy to
  *@src: to copy from
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int c = 0;

	while (*(src + b) != '\0')
	{
		b++;
	}
	for (; c < b; c++)
	{
		dest[c] = src[c];
	}
	dest[b] = '\0';
	return (dest);
}
