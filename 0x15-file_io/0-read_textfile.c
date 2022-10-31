#include "main.h"

/**
 * read_textfile - read textfile and prints it to stdo
 * @filename: pointer to be read
 * @letters: number of letter it should read
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t r, w;
	int fd;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || r != w)
		return (0);
	free(buffer);
	close(fd);
	return (r);
}
