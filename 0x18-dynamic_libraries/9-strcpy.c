#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int counts = 0;

	while (counts >= 0)
	{
		*(dest + counts) = *(src + counts);
		if (*(src + counts) == '\0')
			break;
		counts++;
	}
	return (dest);
}
