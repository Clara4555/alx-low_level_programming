#include "main.h"
/**
  *_slower - checks for lowercase
  *@c: Character to be checked
  *Return: if char is lowercase, otherwise 0.
 */
int _slower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
