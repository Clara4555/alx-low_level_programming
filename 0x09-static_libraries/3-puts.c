#include"main.h"
#include <stdio.h>
/**
  *_puts - function that prints a string followed by/n
  *@str: string to be printed
  *Return: 0 alway successful
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

