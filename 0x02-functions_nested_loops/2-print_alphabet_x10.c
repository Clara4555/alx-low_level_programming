#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase\n
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char g;
	int p;

	p = 0;
	while (p < 10)
	{
		g = 'a';
		while (g <= 'z')
		{
			_putchar(g);
			g++;
		}
		_putchar('\n');
		p++;
	}
}
