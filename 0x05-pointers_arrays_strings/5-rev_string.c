#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char j;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
		k++;
	for (i = 0; i < k / 2; i++)
	{
		j = s[i];
		s[i] = s[k - 1 - i];
		s[k - 1 - i] = j;
	}
}


