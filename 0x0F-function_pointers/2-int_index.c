#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for integer
 * @array: array itself
 * @size: size of array
 * @cmp:pointer to function
 *
 * Return: int element matched or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
