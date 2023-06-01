#include "main.h"
/**
  *_strpbrk - find the first character of first string
  *@s: input
  *@accept: input
  *Return: 0 always
  */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (s = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
