#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (int i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter  <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
