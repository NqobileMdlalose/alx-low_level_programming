#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - Appends the given text content to the end of the
 * specified file.
 * @filename: Name of the file to append to
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, bw = 0, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	if (text_content != NULL)
		bw = write(file, text_content, len);
	if (bw == -1 || (text_content != NULL && bw != len))
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
