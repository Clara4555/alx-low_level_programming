#include "main.h"
/**
  *_isupper - checks if parameter is an uppercase
  *@c: input character
  *Return: 1 if is an uppercaser or otherwise
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
