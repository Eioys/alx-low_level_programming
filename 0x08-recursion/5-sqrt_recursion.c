#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i)
{

	/**
	 * _sqrt_recursion - returns the natural square root of a number
	 * @n: int to get sqrt of
	 *
	 * Return: natural sqrt
	 */

	int _sqrt_recursion(int n)
	{
		return (_sqrt(n, 1));
	}
	/**
	 * _sqrt - finds the natural sqrt
	 * @n: number to calculate the sqrt
	 * @i: iterator
	 *
	 * Return: the squre root
	 */

	int _sqrt(int n, int i)
	{
		int sqrt = i * i;

		if (sqrt > n)
			return (-1);

		if (sqrt == n)
			return (i);

		return (_sqrt(n, i + 1));
	}
}
