#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_strdup -  function that returns a pointer to a new space in memory
  *@str: character
  *Return: always 0 if positive
  *
  *
  */
char *_strdup(char *str)
{
	char *bbb;
	int a = 0;
	int c = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	bbb = malloc(sizeof(char) * (a + 1));
	if (bbb == NULL)
		return (NULL);
	for (c = 0; str[c]; c++)
		bbb[c] = str[c];
	return (bbb);
}
