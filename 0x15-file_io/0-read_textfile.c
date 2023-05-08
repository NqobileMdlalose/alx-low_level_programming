#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t br, bw;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	br = read(file, buffer, letters);
	if (br == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	bw = write(STDOUT_FILENO, buffer, br);
	if (bw == -1 || bw != br)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (bw);
}
