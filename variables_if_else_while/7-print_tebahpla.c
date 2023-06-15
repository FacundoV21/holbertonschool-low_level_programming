#include<stdio.h>
/**
 * main - Prints a line with the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
