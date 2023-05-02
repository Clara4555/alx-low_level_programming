#include "main.h"
#include <stdio.h>
/**
  *puts2 - function that prints every other character of a string
  *@str: input charcacter
  *Return: void
  */
void puts2(char *str)
{
	int counts = 0;

	while (counts >= 0)
	{
		if (str[counts] ==  '\0')
		{
			putchar('\n');
			break;
		}
		if (counts % 2 == 0)
			putchar(str[counts]);
		counts++;
	}
}
