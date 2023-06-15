#include<stdio.h>
/**
 * main - Prints a line with the alphabet in lowercase, then in upercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int low, up;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar (low);
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar ('\n');
	return (0);
}
