#include "main.h"
/**
  *_isalpha - function that checks for aphabetic char
  *@c: the char to be checked
  *Return: 1 if c is a letter ,0 otherwise
  */
int _isalpha(int c)
{
	return ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
