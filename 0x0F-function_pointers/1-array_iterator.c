#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  executes fxn given as parameter on array[i]
 * @size: size of array
 * @array: actual array
 * @action: function to perform on each element of the array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}

}
