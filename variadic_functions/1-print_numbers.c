#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints all the number using the separator.
 * @separator: Numbers separator.
 * @n: amount of numbers.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i = 0;

	va_start(arg, n);

	for (; i < n ; i++)
	{
		printf("%d", va_arg(arg, unsigned int));
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
	}

	va_end(arg);
	printf("\n");
}
