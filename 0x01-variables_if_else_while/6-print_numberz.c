#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int f;


	for (f = 0; f <= 9; f++)
	{
		putchar(f + 48);
	}
	putchar('\n');
	return (0);
}
