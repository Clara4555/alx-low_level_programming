#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
  *is_palindrome - returns 1 if  string is a palindrome and 0 if not
  *@s: String
  *
  *Return: 0 otherrwise 1
  *
  */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
  * _strlen_recursion - returns the length
  *@s: string
  *Return: length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
  *check_pal - checks characters
  *@i: iterator
  *@len: length
  *@s: string
  *Return: 1 if not 0
  */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
