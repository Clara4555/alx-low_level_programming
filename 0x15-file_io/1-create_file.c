#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *create_file - function that creates a file
  *@text_content: file
  *@filename: name of file
  *
  *Return: always 0 success
  */
int create_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (b = 0; text_content[b];)
			b++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(fd, text_content, b);
	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return (1);
}
