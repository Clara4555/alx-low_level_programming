#include "main.h"
/**
  *_strpbrk - Entry searches a string for any of a set of bytes
  *@s: input1
  *@accept: input2
  *Return: always 0 (success)
  */
char *_strpbrk(char *s, char *accept)
{
	int h;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
				return (s);
		}
		s++;
	}
	return ('\0');
}
