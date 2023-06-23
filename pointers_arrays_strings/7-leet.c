#include "main.h"
/**
* leet - Change some letters to nums.
* @c: a pointer to a char.
* Return: a char.
*/

char *leet(char *c)
{
	char l[5] = "aeotl", n[5] = "43071";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == l[j] || c[i] == l[j] - 32)
			{
				c[i] = n[j];
			}
		}
	}
return (c);
}
