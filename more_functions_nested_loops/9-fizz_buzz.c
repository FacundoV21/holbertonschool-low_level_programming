#include<stdio.h>

/**
 * main - Prints nums from 1 to 100 replacing multiples of 5 with Buzz
 * and multiples of 3 with Fizz and the both with FizzBuzz
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c != 1)
		{
			putchar(' ');
		}
		if (((c % 3) == 0) && ((c % 5) == 0))
		{
		printf("FizzBuzz");
		}
		else if (((c % 3) == 0) && ((c % 5) != 0))
		{
			printf("Fizz");
		}
		else if (((c % 3) != 0) && ((c % 5) == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", c);
		}
	}
	putchar('\n');
	return (0);
}
