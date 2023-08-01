#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: file that will be created
 * @text_content: content to put in the file
 * Return: 1 if success, -1 if failure.
 */

int create_file(const char *filename, char *text_content)
{
	int n = 0;

	if (filename == NULL)
		return (-1);

	n = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (n == -1)
		return (-1);

	if (text_content != NULL)
		write(n, text_content, strlen(text_content));
	else
		write(n, "", 0);

	return (1);
}
