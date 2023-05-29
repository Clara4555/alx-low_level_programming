#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - ENTRY POINT
  *prints the minimum number of coins to make change for an amount of money
  *@argc: argument
  *@argv: argument vector
  *Return: 0 always else otherwise
  *
  */
int main(int argc, char *argv[])
{
	int n, h, output;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	output = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (h = 0; h < 5 && h >= 0; n++)
	{
		while (n >= coin[h])
		{
			output++;
			n -= coin[h];
		}
	}
	printf("%d\n", output);
	return (0);
}
