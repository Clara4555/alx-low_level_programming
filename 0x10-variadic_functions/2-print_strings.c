#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
  *print_strings - fiunc that prints a string/n
  *@n: number
  *@separator: string
  *@....: variable
  *Description: f separator is NULL, don’t print it
  *
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *sta;
	unsigned int count;

	va_start(strings, n);
	for (count = 0; count < n; count++)
	{
		sta = va_arg(strings, char*);
		if (sta == NULL)
			printf("(nil)");
		else
			printf("%s", sta);
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
