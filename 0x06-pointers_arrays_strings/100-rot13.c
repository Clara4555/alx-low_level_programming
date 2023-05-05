#include "main.h"
/**
  *rot13 - function that encodes a string using rot13
  *@a:input
  *Return: pointer to dest
  */
char *rot13(char *a)
{
	int c, d;

	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (c = 0; a[c] != '\0'; c++)
	{
		for (d = 0; x[d] != '\0'; d++)
		{
			if (a[c] == x[d])
			{
				a[c] = y[d];
				break;
			}
		}
	}
	return (a);
}
