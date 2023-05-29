#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * _is_zero - checks  number is zero
 * @argv: argument
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int a, n1 = 1, n2 = 1;

	for (a = 0; argv[1][a]; a++)
		if (argv[1][a] != '0')
		{
			n1 = 0;
			break;
		}
	for (a = 0; argv[2][a]; a++)
		if (argv[2][a] != '0')
		{
			n2 = 0;
			break;
		}
	if (n1 == 1 || n2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
/**
  * _initialize_array - set memory
  *@arr: character
  *length: length
  *Return: pointer
  */
char *_initialize_array(char *arr, int length)
{
	int a = 0;

	for (a = 0; a < length; a++)
		arr[a] = '0';	
	arr[length] = '\0';
	return (arr);
}
/**
 * _checknum - checks length of the integers
 * @argv: arguments
 * @n: row
 *
 * Return: length
 */
int _checknum(char *argv[], int n)
{
	int length;

	for (length = 0; argv[n][length];length++)
		if (!isdigit(argv[n][length]))
		{
			printf("Error\n");
			exit(98);
		}

	return (length);
}
/**
 * main - Entry
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int nin1, nin2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
		printf("Error\n"), exit(98);
	nin1 = _checknum(argv, 1), nin2 = _checknum(argv, 2);
	_is_zero(argv), lnout = nin1 + nin2, nout = malloc(lnout + 1);
	if (nout == NULL)
		printf("Error\n"), exit(98);
	nout = _initialize_array(nout, lnout);
	k = lnout - 1, i = nin1 - 1, j = nin2 - 1, ca = addl = 0;
	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;
				if (add > 9)
					nout[k - 1] = (add / 10) + '0';
				nout[k] = (add % 10) + '0';
			}
			i = nin1 - 1, j--, addl = 0, ca++, k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout), nout = malloc(lnout + 1), nout = _initialize_array(nout, lnout);
			k = lnout - 1, i = nin1 - 1, j = nin2 - 1, ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = add / 10, nout[k] = (add % 10) + '0';
		}
	}
	printf("%s\n", nout);
	return (0);
}

