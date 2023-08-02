#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *	main - copies the content of a file to another file
 *	@argc: argument counter
 *	@argv: argumens
 *	Return: error or succes values depending on the result
 */

int main(int argc, char *argv[])
{
	int o1, o2, rd, wrt, c1, c2;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	o1 = open(argv[1], O_RDONLY);
	o2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);

	while ((rd = read(o1, buff, sizeof(buff))) > 0)
	{
		wrt = write(o2, buff, rd);
		if (wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(o1);
	c2 = close(o2);
	if (c1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", o1), exit(100);

	if (c2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", o2), exit(100);
	return (0);
}
