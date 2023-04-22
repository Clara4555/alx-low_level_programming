#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int u;


	for (u = 48; u <= 57; u++)
	{
		putchar(u);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
