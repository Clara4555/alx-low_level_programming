#include "main.h"
int actual_prime(int n, int i);
/**
  *is_prime_number - if an integer is prime or not
  *@n: evaluation
  *Return: if n is prime return 1 0 ,if not
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
  *actual_prime - calculate if number is prime recursively
  *@n:evaluation
  *@i:iterator
  *Return: 1 if n is prime ,0 is not
  */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
