#include "main.h"
#include <stdio.h>
/**
  *_atoi -converts string to integer
  *@s: string to be altered or converted
  *Return: int converted from string
  */
int _atoi(char *s)
{
	int a, b, c, d, f, count;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	f = 0;
	count = 0;
	while (s[d] != '\0')
		d++;
	while (a < d && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			count = s[a] - '0';
			if (b % 2)
				count = -count;
			c = c * 10 + count;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
/**
  *main - multiplies two numbers
  *@argc: number of argument count
  *@argv: array of vector argumment
  *Return: 0 (success), 1 (error)
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
