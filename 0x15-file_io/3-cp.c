#include "main.h"

void cp_file(char *file_from, char *file_to);
/**
 * main - check-code
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (always success)
 */
int main(int argc, char **argv)
{

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}

void cp_file(char *file_from, char *file_to)
{
	int fdr, fdw;
	int r, w;
	char buffer[1024];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fdr = open(file_from, O_RDONLY);
	if (fdr == -1)
		dprintf(2, "Error: Can't read from file %s\n", file_from), exit(98);
	fdw = open(file_to, O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fdw == -1)
		dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);
	r = read(fdr, buffer, 1024);
	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (r > 0)
	{
		w = write(fdw, buffer, (ssize_t) r);
		if (w == -1)
			dprintf(2, "Error: Can't write to %s\n", file_to), exit(99);
	}

	r = close(fdr);
	if (r == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fdr);
		exit(100);
	}
	w = close(fdw);
	if (w == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fdr);
		exit(100);
	}
}
