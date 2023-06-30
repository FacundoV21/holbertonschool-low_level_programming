#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isnum - returns if a str is a num or not
 * @*a: str to evaluate
 * @a: value of *a
 * Return: 0 if num else 1
 */
int isnum(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (isdigit(a[c]) == 0)
			return (1);
	}
	return (0);
}


/**
 * main - Adds the arguments pased to the program
 * @argc: amount of arguments
 * @*argv[]: array of arguments
 * @argv: value of *argv
 * Return: 0 if succes 1 if Error
 */

int main(int argc, char *argv[])
{
	int r = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (isnum(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			r += atoi(argv[i]);
		}
	}
	printf("%d\n", r);
	return (0);
}
