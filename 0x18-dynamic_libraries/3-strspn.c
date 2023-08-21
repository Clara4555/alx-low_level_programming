#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring.
  *@s: input1
  *@accept: input2
  *Return: always 0 success
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int h = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				h++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (h);
		}
		s++;
	}
	return (h);
}
