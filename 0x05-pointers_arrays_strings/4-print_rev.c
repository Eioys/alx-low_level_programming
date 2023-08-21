#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: parameter to be reversed
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	int k  = 0;

	for (i = 0; s[i] != '\0'; i++)
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
