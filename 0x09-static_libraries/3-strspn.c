#include "main.h"
/**
  *_strspn - returns the index of the first character found.
  *@s: input
  *@accept: input
  *Return: 0 always
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int g = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				g++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (g);
		}
		s++;
	}
	return (g);
}
