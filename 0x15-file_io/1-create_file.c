#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define FILE_PERMISSIONS (S_IRUSR | S_IWUSR)
/**
 * create_file - Creates a file with the given filename and writes the given
 * text content to it. If the file already exists, it will be truncated.
 * The created file will have rw------- permissions.
 * @filename: Name of the file to create
 * @text_content: Text content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, fw = 0, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMISSIONS);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	fw = write(file, text_content, len);
	if (fw == -1 || file == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
