#include "main.h"
/**
 * print_last_digit - a function that prints last digit
 * @i: function parameter
 * Return: 0 (Success)
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}