#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - function tha5 prinyts number \n
  *@separator: string
  *@n: integer
  *@....: number to be printed
  *
  *
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int count;

	va_start(nums, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(nums, int));
		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
