#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: name of the file
 * @text_content: string added to the end of the file
 * Return: 1- syccess or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	ssize_t w;

	if (filename == NULL)
		return (-1);
	fd  = open(filename, O_CREAT | O_APPEND | O_WRONLY, 00664);
	if (fd == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	w = write(fd, text_content, i);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
