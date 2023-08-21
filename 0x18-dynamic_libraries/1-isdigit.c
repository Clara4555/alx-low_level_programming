#include "main.h"
/**
  *_isdigit - checks for digit 0 through 9
  *@c: input number
  *Return: 1 is c is digit ,otherwise
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
