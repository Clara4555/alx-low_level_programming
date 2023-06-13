#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *append_text_to_file - appends text
  *@text_content: content
  *@filename: filename
  *Return: always 0 success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	a = write(fd, text_content, l);
	if (fd == -1 || a == -1)
		return (-1);
	close(fd);
	return (1);
}
