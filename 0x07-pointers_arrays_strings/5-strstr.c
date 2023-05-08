#include "main.h"
/**
  *_strstr - function that locates a substring.
  *@haystack: input
  *@needle: input
  *Return: always 0 (success)
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *b = needle;

		while (*s == *b && *b != '\0')
		{
			s++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
