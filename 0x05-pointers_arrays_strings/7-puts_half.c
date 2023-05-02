#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string.
 * @str: input char.
 * Return: void.
 */
void puts_half(char *str)
{
	int counts = 0, a;

	while (counts >= 0)
	{
		if (str[counts] == '\0')
			break;
		counts++;
	}
	if (counts % 2 == 1)
		a = counts / 2;
	else
		a = (counts - 1) / 2;
	for (a++; a < counts; a++)
		putchar(str[a]);
	putchar('\n');
}
