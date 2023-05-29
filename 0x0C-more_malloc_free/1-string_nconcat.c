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
	unsigned int b = 0;
	c = 0;
	d = 0;
	e = 0;

	while (s1 && s2[d])
		d++;
	if (n < e)
		a = malloc(sizeof(char) * (d + n + 1));
	else
		a = malloc(sizeof(char) * (d + e + 1));
	if (!a)
		return (NULL);
	while (c < d)
	{
		a[c] = s1[c];
		c++;
	}
	while (n >=  e && c < (d + n))
			a[c++] = s2[d++];
			s[c] = '\0';
			return (a);
}
