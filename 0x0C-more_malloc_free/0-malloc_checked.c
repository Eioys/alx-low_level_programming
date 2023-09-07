#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of byte
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
        char *output;

        output = malloc(b);
                if (output == NULL)
                        exit(98);
                else
                        return (output);
}
