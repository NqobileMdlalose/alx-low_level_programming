#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output 
 * @filename: name of the file
 * @letters: letters
 * Return: text
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_read;
	ssize_t byte_written;
	char *buf;
	int file;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buf = malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
	{
		close(file);
		return (0);
	}
	byte_read = read(file, buf, letters);
	if (byte_read <= 0)
	{
		free(buf);
		close(file);
		return (0);
	}
	byte_written = write(STDOUT_FILENO, buf, byte_read);
	if (byte_written != byte_read)
	{
		free(buf);
		close(file);
		return (0);
	}
	free(buf);
	close(file);
	return (byte_written);
}
