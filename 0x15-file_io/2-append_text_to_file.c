#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file -  appends text to the end of an existing file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t content_len;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		content_len = 0;
		while (text_content[content_len] != '\0')
		{
			content_len++;
		}
		byte_written = write(file, text_content, content_len);
		if (byte_written == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
