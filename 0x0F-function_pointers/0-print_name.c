#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name- prints name
 * @name: name of pointer
 * @f: functiom to pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
