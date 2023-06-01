#include <stdio.h>
#include "main.h"
/**
  *_isdigit - function that checks for digit
  *@c: int
  *
  *Return: 0 othewise 1
  *
  */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
