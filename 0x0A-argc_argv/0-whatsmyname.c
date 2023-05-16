#include "main.h"
#include <stdio.h>
/**
  *main -  program that prints its name, followed by a new line.
  *@argc: number of argument count
  *@argv: arrary of vectors(arguements)
  *Return: always 0 (success)
  */
int main(int argc __attribute__((unused)), char *argv[])

{
	printf("%s\n", *argv);
	return (0);
}
