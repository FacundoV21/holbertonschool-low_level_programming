#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies the 2 arguments pased to the program
 * @argc: amount of arguments
 * @*argv[]: array of arguments
 * @argv: value of *argv
 * Return: 0 if succes 1 if Error
 */

int main(int argc, char *argv[])
{
	int r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	r = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", r);
	return (0);
	}
}
