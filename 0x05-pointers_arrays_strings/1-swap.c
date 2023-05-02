#include "main.h"
/**
  *swap_int - swaps the values of two whole numbers
  *@a: first whole number to be swapped
  *@b: second whole number to bre swapped
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
