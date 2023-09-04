#include "main.h"

/**
 * create_array - function that creates array of char and intializes
 * @size: space of array
 * @c: specific char to be printed
 * Return: arr or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *sha;

	if (size == 0)
		return (NULL);
	sha = malloc(sizeof(char) * size);
	if (sha == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		sha[i] = c;
	return (sha);
}

