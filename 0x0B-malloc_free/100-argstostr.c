#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  *argstostr - function that concatenates all the arguments
  *@av: pointer array
  *@ac: input
  *Return: always 0 (success)
  */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int n = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			str[n] = av[a][b];
			n++;
		}
		if (str[n] == '\0')
		{
			str[n++] = '\n';
		}
	}
	return (str);
}
