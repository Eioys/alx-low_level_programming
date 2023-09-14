#include "variadic_functions.h"

/**
 * print_all - print any argument to the function
 * @format: format specifier
 * Return: any argument given based on format specifier
 *
 */

void print_all(const char * const format, ...)
{
	int i, checker;
	char *str;
	va_list space;

	va_start(space, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(space, int));
				checker = 0;
				break;
			case 'f':
				printf("%f", va_arg(space, double));
				checker = 0;
				break;
			case 'c':
				printf("%c", va_arg(space, int));
				checker = 0;
				break;
			case 's':
				str = va_arg(space, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				checker = 0;
				break;
			default:
				checker = 1;
				break;
		}
		if (format[i + 1] != '\0' && checker == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(space);
}

