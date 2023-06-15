#include<stdio.h>
/**
 * main - Prints a line with all single digit numbers in base 10 starting with
 * 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar (n);
	}
	putchar ('\n');
	return (0);
}
