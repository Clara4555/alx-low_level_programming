#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *str_concat -  function that concatenates two strings.
  *@s1: one to concatenate
  *@s2: two to concatenate
  *
  *Return:s1 & s2
  */
char *str_concat(char *s1, char *s2)
{
	char *conc;
	int c;
	int v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	c = v = 0;
	while (s1[c] != '\0')
		c++;
	while (s2[v] != '\0')
		v++;
	conc = malloc(sizeof(char) * (c + v + 1));
	if (conc == NULL)
		return (NULL);
	c = v = 0;
	while (s1[c] != '\0')
	{
		conc[c] = s1[c];
		c++;
	}
	while (s2[v] != '\0')
	{
		conc[c] = s2[v];
		c++, v++;
	}
	conc[c] = '\0';
	return (conc);
}
