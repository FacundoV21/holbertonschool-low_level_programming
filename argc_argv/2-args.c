#include <stdio.h>

/**
 * main - Prints all arguments pased to the program
 * @argc: amount of arguments
 * @*argv[]: array of arguments
 * @argv: value of *argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
