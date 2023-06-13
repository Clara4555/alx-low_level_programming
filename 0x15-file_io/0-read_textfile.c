#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  *read_textfile - function that reads a text file and prints it to the POSIX
  *@letters: letters to be printed
  *@filename: filename
  *Return: letters else return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *b;
	ssize_t a;
	ssize_t g;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	g = read(fd, b, letters);
	a = write(STDOUT_FILENO, b, g);
	free(b);
	close(fd);
	return (a);
}
