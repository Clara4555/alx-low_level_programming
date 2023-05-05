#include "main.h"
/**
  *leet - function that encodes a string into 1337.
  *@a:input for string.
  *Return: pointer to dest
  */
char *leet(char *a)
{
	int counter = 0, b;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upp_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(a + counter) != '\0')
	{
		for (b = 0; b < 5; b++)
		{
			if (*(a + counter) == low_letters[b] || *(a + counter) == upp_letters[b])
			{
				*(a + counter) = numbers[b];
				break;
			}
		}
		counter++;
	}
	return (a);
}
