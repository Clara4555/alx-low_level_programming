#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - function that concatenates two strings.
  *@s1: string
  *@s2: string
  *@n: number of byte
  *Return: pointer to resulting string
  *
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0, j = 0, d = 0, e = 0;

	while (s1 && s1[d])
		d++;
	while (s2 && s2[e])
		e++;
	if (n < e)
		a = malloc(sizeof(char) * (d + n + 1));
	else
		a = malloc(sizeof(char) * (d + e + 1));
	if (!a)
		return (NULL);
	while (i < d)
	{
		a[i] = s1[i];
		i++;
	}
	while (n < e && i < (d + n))
		a[i++] = s2[j++];
	while (n >= e && i < (d + e))
		a[i++] = s2[j++];
	a[i] = '\0';
	return (a);
}
