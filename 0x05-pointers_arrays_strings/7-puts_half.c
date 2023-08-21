#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: second half of string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int k = 0;
	int n;

	for (i = 0; str[i] != '\0'; i++)
		k++;
	n = (k - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
