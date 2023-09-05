#include "main.h"

/**
 * _strdup - ceates space and enters the copied string in space
 * @str: string to be copied
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i = 0;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

