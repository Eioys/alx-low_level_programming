#include "variadic_functions.h"

/**
 * sum_them_all- sum of all its parameters.
 * @n: no of arguments
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list(keep);

	va_start(keep, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(keep, const unsigned int);
		}
	}
	va_end(keep);
	return (sum);
}
