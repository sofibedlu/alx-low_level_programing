#include "main.h"
#define ER STDERR_FILENO
#define MAX 1024
/**
 * main - check-code
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (always success)
 */
int main(int argc, char **argv)
{
	int fdr, fdw;
	int r, w;
	char buffer[MAX];
	mode_t mode;

	if (argc != 3)
		dprintf(ER, "Usage: %s file_from file_to\n", argv[0]), exit(97);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
		dprintf(ER, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fdw = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, mode);
	if (fdw == -1)
		dprintf(ER, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {

		r = read(fdr, buffer, MAX);
		if (r == -1)
			dprintf(ER, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (r > 0)
		{
			w = write(fdw, buffer, (ssize_t) r);
			if (w == -1)
			{
				dprintf(ER, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (r > 0);
	r = close(fdr);
	if (r == -1)
		dprintf(ER, "Error: Can't close fd %d\n", fdr), exit(100);
	w = close(fdw);
	if (w == -1)
		dprintf(ER, "Error: Can't close fd %d\n", fdr), exit(100);
	return (0);
}
