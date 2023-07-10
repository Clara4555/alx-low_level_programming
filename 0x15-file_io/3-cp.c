#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates 1024 bytes for a buffer.
 * @file: file
 * Return: buf
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int a;

	a = close(fd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - To check code
 * @argc: The number of argument count
 * @argv: array of pointers to the arguments.
 * Description: If the argument count is -1 - exit code 97.
 * If file_from does not exist - exit code 98.
 * If file_to cannot be created or appended to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int from, t, a, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	a = read(from, buf, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(t, buf, a);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		a = read(from, buf, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(buf);
	close_file(from);
	close_file(t);

	return (0);
}
