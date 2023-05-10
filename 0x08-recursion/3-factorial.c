#include "main.h"
#include <stdio.h>
/**
  *factorial - function that returns the factorial of a given number.
  *@n: returns n factorial of a number
  *Return: n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
