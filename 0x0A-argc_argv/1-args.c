#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
