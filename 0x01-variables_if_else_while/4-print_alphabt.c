#include <stdio.h>
/**
  *main - Entry point
  *Return: always 0 (success)
  */
int main(void)
{
	int r = 97;

	while (r <= 122)
	{
		if (r == 101 || r == 113)
		{
			r++;
			continue;
		}
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
