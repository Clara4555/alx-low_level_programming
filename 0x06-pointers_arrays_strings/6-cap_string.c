#include "main.h"
/**
  *cap_string - function that capitalizes all words of a string
  *@s: input string
  *Return:pointer to dest
  */
char *cap_string(char *s)
{
	int counter = 0, a;

	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + counter) >= 97 && *(s + counter) <= 122)
		*(s + counter) = *(s + counter) - 32;
	counter++;
	while (*(s + counter) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + counter) == sep_words[a])
			{
				if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))
					*(s + (counter + 1)) = *(s + (counter + 1)) - 32;
				break;
			}
		}
		counter++;
	}
	return (s);
}
