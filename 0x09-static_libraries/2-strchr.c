#include "main.h"
/**
  *_strchr - searches for first occurence in a string
  *@s: value to inputted
  *@c: value to be inputted
  *
  *Return: 0 always
  *
  */
char *_strchr(char *s, char c)
{
	int v;

	for (; s[v] >= '\0'; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}
	return (0);
}
