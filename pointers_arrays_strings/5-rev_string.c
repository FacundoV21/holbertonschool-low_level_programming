#include "main.h"

/**
 * rev_string - reverts a string
 * @s: String input
 */

void rev_string(char *s)
{
	int i, size;
	char x, *start, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}
	size = i + 1;
	start = s;
	for (i = 0; i < size / 2; i++)
	{
		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
}
