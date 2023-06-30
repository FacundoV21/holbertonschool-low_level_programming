#include <stdio.h>

/**
 * main - Prints the program name
 * @argc: amount of arguments
 * @*argv[]: array of arguments
 * @argv: value of *argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
