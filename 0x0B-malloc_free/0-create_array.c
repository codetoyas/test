#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of the memory to print
 * @c: characters to print
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
