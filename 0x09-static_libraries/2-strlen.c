#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: parameter to find lenght
 * Return:0
 */

int _strlen(char *s)
{
	int i;
	int k = 0;

	for (i = 0 ; s[i] != '\0'; i++)
		k++;
			return (k);
}
