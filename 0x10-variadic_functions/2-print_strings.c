#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator:string to be printed between the strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list holder;

	va_start(holder, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(holder, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(holder);
}

