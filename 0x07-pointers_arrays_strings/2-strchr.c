#include "main.h"
/**
  *_strchr - function that locates a character in a string.
  *@s: input1
  *@c: input2
  *Return: always 0 (success)
  */
char *_strchr(char *s, char c)
{
	int g = 0;

	for (; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
			return (&s[g]);
	}
	return (0);
}
