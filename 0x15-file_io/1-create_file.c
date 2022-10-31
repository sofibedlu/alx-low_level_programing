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

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fd == -1)
		return (-1);
	buffer = malloc(strlen(text_content) + 1);
	if (buffer == NULL)
		return (0);
	strcpy(buffer, text_content);
	if (text_content == NULL)
		buffer = "";
	write(fd, buffer, strlen(buffer) + 1);
	close(fd);
	return (1);
}
