#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer_1024(char *file);
void close_file(int fd);

/**
  *create_buffer_1024 - gives space for 1024 bytes for a buffer
  *@file: file to store buffer
  *
  *Return: Always 0 success
  */
char *create_buffer_1024(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "ERROR: CAN'T WRITE TO %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
  *close_file - closes file
  *@fd: file
  */
void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error:can't close fd %d\n", fd);
		exit(100);
	}
}

/**
  *main - cpoies the conntents to anoter file
  *@argc: argument count
  *@argv: argument vector
  *Return: always 0 success
  *Description: if argc is incorrect - exit code 97
  *if file_from doesnt exist exit code
  *file_to exit 99
  *file_to, file_from exit code 100
  */
int main(int argc, char *argv[])
{
	int f, t, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}
	buf = create_buffer_1024(argv[2]);
	f = open(argv[1], O_RDONLY);
	r = read(f, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(t, buf, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cant't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(f, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (r > 0)
	free(buf);
	close_file(f);
	close_file(t);
	return (0);
}
