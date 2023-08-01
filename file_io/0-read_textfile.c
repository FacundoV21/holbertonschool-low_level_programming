#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - Reads and prints a file to the POSIX standard output.
 * @filename: file that will be read
 *  @letters: is the number of letters to be read and printed
 * Return: the amount of letters it actually read and printed, 0 if failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n = 0, m = 0;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (-1);

	n = open(filename, O_RDONLY);
	if (n == -1)
		return (0);

	m = read(n, buff, letters);
	write(STDOUT_FILENO, buff, m);
	close(n);

	return (m);
}
