#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *_isupper - functions that prints uppercase
  *
  *@c: charcter
  *
  *Return: 0 always  success otherwise 1
  *
  *
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
