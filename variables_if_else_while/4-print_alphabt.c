#include<stdio.h>
/**
 * main - Prints a line with the alphabet except from the letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar ('\n');
	return (0);
}
