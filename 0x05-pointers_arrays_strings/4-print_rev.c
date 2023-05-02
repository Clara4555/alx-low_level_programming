#include "main.h"
#include <stdio.h>
/**
  *print_rev - prints a string, in reverse, followed by a new line.
  *@s: characters to print
  *Return: void
  */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for (r -= 1; r >= 0; r--)
	{
		putchar(s[r]);
	}
	putchar('\n');
}
