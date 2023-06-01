#include "main.h"
/**
  *_isalpha - function that checks for alphabetic char
  *@c: char
  *Return: 1 otherwise 0
  */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
