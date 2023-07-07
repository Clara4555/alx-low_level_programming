#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_endianness - function that checks the endianness.
 * Return:Always 0 success
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *) &a;

	return (*b);
}
