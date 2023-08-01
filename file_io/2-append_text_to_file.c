#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file that will be modified
 * @text_content: content to put in the file
 * Return: 1 if success, -1 if failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int n = 0;

	if (filename == NULL)
		return (-1);

	n = open(filename, O_RDWR | O_APPEND);
	if (n == -1)
		return (-1);

	if (text_content != NULL)
		write(n, text_content, strlen(text_content));

	return (1);
}
