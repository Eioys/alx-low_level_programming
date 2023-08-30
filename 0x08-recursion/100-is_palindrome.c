#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @s: the string
 * Return: lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character os the string.
 * @s: the string
 * @a1: small iterator
 * @a2: big iterator
 * Return: 0 or 1
 */

int comparator(char *s, int a1, int a2)
{
	if (*(s + a1) == *(s + a2))
	{
		if (a1 == a2 || a1 == a2 + 1)
			return (1);
		return (0 + comparator(s, a1 + 1, a2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - looks for an empty string
 * @s: sting in question
 * Return: 1 if palindrome, 0 else
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
