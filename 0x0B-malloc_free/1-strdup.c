#include "main.h"

/**
 * _strdup - ceates space and enters the copied string in space
 * @str: strig to be copied
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;

	copy = malloc(sizeof(char) * count++);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}

