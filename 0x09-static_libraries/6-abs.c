#include "main.h"

/**
 * _abs - A program that finds absolute number
 * @a: function parameter
 * Return: -a or a;
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
