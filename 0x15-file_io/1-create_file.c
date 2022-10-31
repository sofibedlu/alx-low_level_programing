#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: null teminated string to write to the file
 * Return: 1 - success or -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	buffer = malloc(strlen(text_content) + 1);
	if (buffer == NULL)
		return (-1);
	strcpy(buffer, text_content);
	if (text_content != NULL)
	{
		w = write(fd, buffer, strlen(buffer) + 1);
		if (w == -1)
			return (-1);
	}
	close(fd);
	free(buffer);
	return (1);
}
