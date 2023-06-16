#include<stdio.h>
/**
 * main - Prints a line with the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
		if (n == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
