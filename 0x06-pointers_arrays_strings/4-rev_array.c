#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @n: number of elements of the array
 * @a: array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int k;

	for (i = 0; i < n / 2; i++)
	{
		k = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = k;
	}
}
