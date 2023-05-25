#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - function that returns the sum of all its parameters.
  *@n: parametres
  *@....: varriable
  *Return:  n == 0, return 0
  *
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
