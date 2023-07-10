#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
/**
 * print_error_and_exit - prints error
 * @error_message: error message
 * Return: void
 */
void print_error_and_exit(const char *error_message)
{
	dprintf (STDERR_FILENO, "%s\n", error_message);
	exit(EXIT_FAILURE);
}
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;
	int fd_to, fd_from;
	char buf[BUFFER_SIZE];
	ssize_t byte_read, byte_written;

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((byte_read = read(fd_from, buf, BUFFER_SIZE)) > 0)
	{
		byte_written = write(fd_to, buf, byte_read);
		if (byte_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (byte_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
